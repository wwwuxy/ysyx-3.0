#include <getopt.h>
#include"include.h"

static char *img_file = NULL;

static int parse_args(int argc, char *argv[]){
  const static option table[] = {
    {"img", required_argument, NULL, 'i'},
    {0, 0, NULL, 0},
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
    Log("No image is given. Use the default build-in image.");
    return;
  }
  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

//size表示文件的大小
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  Log("The image is %s, size = %ld", img_file, size);
  
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);    //将文件内容读入内存
  assert(ret == 1);

  fclose(fp);
}

void init_npc(int argc, char *argv[]){
  parse_args(argc, argv);
  load_img(img_file);
  return 0;
}