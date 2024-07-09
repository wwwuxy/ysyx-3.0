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
    }
  }
  return 0;
}

extern uint8_t mem[MEM_SIZE]; //通过extern关键字引用mem数组(mem.cpp中定义)

static void load_img(char *img_file ){
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

  init_difftest(diff_file, size);  //加载动态链接库
}

