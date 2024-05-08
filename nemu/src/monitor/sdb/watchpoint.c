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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint32_t val;
  char expr[50];
  bool used;			//表示这个监视点是否使用

  /* TODO: Add more members if necessary */

} WP;

 WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;	//不用malloc free

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].used = false;
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);	//wp_pool[NR_WP].next = NULL
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(){
  WP * new_wp;
  for(new_wp = free_;new_wp->next != NULL;new_wp = new_wp->next){
    if(new_wp->used == false){
      new_wp->used = true;
      new_wp->next = head;  //头插
      head = new_wp;
    }
    else{
      printf("No free WP!\n");
      assert(0);
    }
  }
  return new_wp;
}


void free_wp(WP *wp){
  WP *p;
  if(wp->NO == head->NO){   //只有一个监视点
    head->used = false;
    head = NULL;
    return;
  }
  for(p = head;p->next != NULL;p = p->next){
    if(p->next->NO == wp->NO){
      p->next->val = false;
      p->next = p->next->next;
      return;
    }
  }
}

void display_watchpoint(){    //打印所以监视点
  WP *p = head;
  bool success = false;
  if(p == NULL){
    printf("No Watchpoints Can Be Printed!\n");
  }else{
    for(;p->next != NULL;p = p->next){
      p->val = expr(p->expr,&success);
      if(success){
        printf("NO.%d:%s value is %d\n",p->NO,p->expr,p->val);
      }
    }
  }
}

void delete_watchpoint(int no){
    for(int i = 0 ; i < NR_WP ; i ++){
        if(wp_pool[i].NO == no){
            free_wp(&wp_pool[i]);
            return;
            }
    }
}

void create_watchpoint(char* args){
    WP* p =  new_wp();
    strcpy(p->expr, args);
    bool success = false;
    int tmp = expr(p->expr,&success);
    if(success) {
      p->val = tmp;
      printf("Create Watchpoint No.%d .\n", p->NO);
    }else{
        printf("Error Expr_Compute\n");
    }
}