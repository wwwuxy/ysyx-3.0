/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include"watchpoint.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read){         //inital
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");   //readline将会从终端读取一行数据然后返回

  if (line_read && *line_read) {
    add_history(line_read);         //input
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);    //simulate cpu
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;	//优美退出
  return -1;    
}

static int cmd_printf(char *args){
	if(*args == 'r'){
		isa_reg_display();
	}else if (*args == 'w'){
		display_watchpoint();	
	}else{
		printf("Error Args!\n");
		assert(0);
	}
	return 0;
}

static int cmd_nextstep(char *args){
	int n;
	if(args == NULL){
		n = 1;
	}else{
		sscanf(args,"%d",&n);
	}
	cpu_exec(n);
	return 0;
}

static int cmd_scanfmem(char *args){
	char *adr,*n;
	n =  strtok(args," ");   //分割取值
	adr = args + strlen(n) +1;
	int num;
       	sscanf(n,"%d",&num);    //格式化读取
	vaddr_t add;
	sscanf(adr,"%x",&add);
	for(int i = 0;i<num;i++){
		 printf("0x%08x\t\n",vaddr_read(add+i*4,4));  //打印
	}
	return 0;
}
static int cmd_compute_expr(char *args){
	int data;
	bool success = false;
	data = expr(args,&success);	//调用expr.c中的expr函数
	if(success == true){
		printf("%d\n",data);
	}
	else{
		printf("Error Expression!\n");
	}
	return 0;
}

static int cmd_delwatchpoint(char *args){
  	delete_watchpoint(atoi(args));
  	return 0;
}

static int cmd_setwatchpoint(char *args){
	create_watchpoint(args);
	return 0;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);        //函数指针
} cmd_table [] = {                     //inital commands 
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"info","Printf Regs",cmd_printf},
  {"si","Next N Step",cmd_nextstep},
  {"x","Scanf memory",cmd_scanfmem},
  {"p","compute expression",cmd_compute_expr},
  {"d","Delete watchpoint with No.",cmd_delwatchpoint},
  {"w","Set watchpoint with expr",cmd_setwatchpoint},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)   //数组长

static int cmd_help(char *args) {   //打印指令表中的指令和描述
  /* extract the first argument */
  char *arg = strtok(NULL, " ");   //strtok分割字符串
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);    //打印指令帮助信息
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {      //比较arg和name是否相同
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);    //error
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");   //cmd是指令
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;   //args是参数
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}