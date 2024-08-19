#include <getopt.h>
#include "include.h"

void scanf_mem();
static char *img_file = NULL;
static char *diff_file = NULL;
long size;

static int parse_args(int argc, char *argv[]){
  const static option table[] = {
    {"img" , required_argument, NULL, 'i'},
    {"diff", required_argument, NULL, 'd'},
    {0     , 0                , NULL,  0 },
  };
  int o;
  while((o = getopt_long(argc, argv, "-i:d:", table, NULL)) != -1){
    switch(o){
      case 'i': img_file = optarg; break;
      case 'd': diff_file = optarg; break;
      default: printf("fault option\n"); assert(0);
    }
  }
  return 0;
}

extern uint8_t mem[MEM_SIZE]; //通过extern关键字引用mem数组(mem.cpp中定义)

void initialize_mem_with_ebreak() {
    uint32_t ebreak = 0x00100073;  // ebreak 指令

    // 将 ebreak 指令的字节写入 mem 数组的前 4 个字节
    mem[0] = (ebreak >>  0) & 0xFF;  // 取 ebreak 的第 1 个字节
    mem[1] = (ebreak >>  8) & 0xFF;  // 取 ebreak 的第 2 个字节
    mem[2] = (ebreak >> 16) & 0xFF;  // 取 ebreak 的第 3 个字节
    mem[3] = (ebreak >> 24) & 0xFF;  // 取 ebreak 的第 4 个字节
}

static void load_img(char *img_file ){
  printf("load_img\n");
  if(img_file == NULL){
    printf("No image is given. Use the default build-in image.\n");
    return;  //built-in image size，仿照nemu/src/monitor/monitor.c
  }
  FILE *fp = fopen(img_file, "rb");
  assert(fp != NULL);   //打开文件失败

//size表示文件的大小
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  // printf("The image is %s, size = %ld\n", img_file, size);
  
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);    //将文件内容读入内存
  assert(ret == 1);

  fclose(fp);
}

void init_npc(int argc, char *argv[]){
  parse_args(argc, argv);
  load_img(img_file);
  // initialize_mem_with_ebreak();
  printf("init_npc done\n");

  init_difftest(diff_file, size);  //加载动态链接库
}

