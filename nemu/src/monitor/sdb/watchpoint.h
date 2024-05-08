#ifndef WATCHPOINT_H
#define WATCHPOINT_H

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint32_t val;
  char expr[50];
  bool used;			
} WP;

extern WP wp_pool[NR_WP];


void init_wp_pool();
WP* new_wp();
void free_wp(WP *wp);
void display_watchpoint();
void delete_watchpoint(int no);
void create_watchpoint(char* args);
#endif