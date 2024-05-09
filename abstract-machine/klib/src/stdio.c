#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void int_char(uint32_t x,char *str){	//实现int到char的转换,存放在str里
	uint32_t tmp = x;
	uint32_t x_index = 0;	//表示x的位数
	while(tmp){
		tmp /= 10;
		x_index++;	//求x的位数
	}
	// memset(str,0,x_index);
	uint32_t i = x_index;
	uint32_t n = i;
	x_index = 1;
	while(i){
		x_index *= 10;
		i--;
	}
	x_index /= 10;
	while(n){ 	
		tmp = x / x_index;
		str[i++] = tmp + '0';
		x %= x_index;
		x_index /= 10;
		n--;
	}
  str[i] = '\0';
}

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  char * s;
  int d;
  int num = 0;    //记录out中插入了多少字符
  int si = 0;
  char str[500] = "\0";   //用来存放int转换成char的字符串
  va_start(ap,fmt);
  while(*fmt != '\0'){
     *out = *fmt;
     if(*fmt == '%'){
      fmt++;
      switch(*fmt){
        case 's':
          s = va_arg(ap,char *);
          while(s[si] != '\0'){
            *out = s[si];
            out++;
            num++;
            si++;
            }
          si = 0;
          *out = '\0';
          break;

        case 'd':
          d = va_arg(ap,int);
          int_char(d,str);
          for(int i = 0; str[i] != '\0'; i++){
            *out = str[i];
            out++;
            num++;
          }
          *out = '\0';
          break;
      }
      out--;
      num--;
    }
      fmt++;
      out++;
      num++;
  }
  va_end(ap);
  *out = '\0';
  return num;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
