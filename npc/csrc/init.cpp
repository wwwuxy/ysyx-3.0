#include <getopt.h>
#include"include.h"

static char *img_file = NULL;

static int parse_args(int argc, char *argv[]){
  const static option table[] = {
    {"img", required_argument, NULL, 'i'},
    {0    , 0                , NULL,  0 },
  };
  int o;
  while((o = getopt_long(argc, argv, "-i:", table, NULL)) != -1){
    switch(o){
      case 'i': img_file = optarg; break;
    }
  }
  return 0;
}

extern uint8_t mem[MEM_SIZE];

static void load_img(char *img_file ){
  if(img_file == NULL){
    printf("No image is given. Use the default build-in image.\n");
    return;  //built-in image size，仿照nemu/src/monitor/monitor.c
  }
  FILE *fp = fopen(img_file, "rb");
  assert(fp != NULL);   //打开文件失败

//size表示文件的大小
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp) - 1;
  // printf("The image is %s, size = %ld\n", img_file, size);
  
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);    //将文件内容读入内存
  assert(ret == 1);

//打印内存内容
  // printf("mem content:\n");
  // for (int i = 0; i < size; i++) {
  //   printf("%02X ", mem[i]);
  //   if ((i + 1) % 16 == 0) {
  //     printf("\n");
  //   }
  // }
  fclose(fp);
}

void init_npc(int argc, char *argv[]){
  parse_args(argc, argv);
  load_img(img_file);
}