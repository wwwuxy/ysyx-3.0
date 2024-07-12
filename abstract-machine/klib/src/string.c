#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  for(int i = 0; s[i] != '\0'; i++){
    len++;
  }
    return len;
  // panic("Not implemented");
}


//注意： strcpy() 函数不会检查目标字符串的大小是否足够容纳源字符串
char *strcpy(char *dst, const char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dst[i] = src[i];
    }
    dst[i] = '\0'; // 添加字符串终止符
    return dst;
}


char *strncpy(char *dst, const char *src, size_t n) {
  char tmp = src[0];
  for(int i = 0; i < n; i++){
    tmp = src[i];
    dst[i] = tmp;
  }
  return dst;
  // panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  int dstlen = strlen(dst);
  int srclen = strlen(src);
  char tmp = src[0];
  for(int i = dstlen; i < dstlen + srclen; i++){
    tmp = src[i-dstlen];
    dst[i] = tmp;
  }
  return dst;
  // panic("Not implemented"); 
}


int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}


int strncmp(const char *s1, const char *s2, size_t n) {   //比较前n个字符
  int i;
  for(i = 0; i < n; i++){
    if(s1[i] < s2[i]) return -1;
    else if(s1[i] > s2[i]) return 1;
  }
  if(s1[i] == s2[i]) return 0;
  else if(s1[i] != '\0') return 1;
  else return -1;
  // panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  void *ret = s;

  while(n>0){
    *(char*)s = (char)c;   //内存是以字节为单位存储的，故要强转成char类型
    s = (char*)s + 1;
    n--;
  }
  return ret;
}

void *memmove(void *dst, const void *src, size_t n) { 
    assert(dst != NULL);
    assert(src != NULL);

    char *d = (char *)dst;
    const char *s = (const char *)src;
    void *rst = dst;

    if (d < s) {  // 从左往右复制
        while (n > 0) {
            *d = *s;
            d++;
            s++;
            n--;
        }
    } else {  // 从右往左复制
        d += n - 1;
        s += n - 1;
        while (n > 0) {
            *d = *s;
            d--;
            s--;
            n--;
        }
    }
    return rst;
}

void *memcpy(void *out, const void *in, size_t n) {
  void *ret = out;
  while(n>0){
    *(char*)out = *(char*)in;
    (char*)out++;
    (char*)in++;
    n--;
  }
  return ret;
  // panic("Not implemented");
}

int memcmp(const void* s1, const void* s2, size_t n) {
  int ret = 0;
  char* s1_p = (char*)s1;
  char* s2_p = (char*)s2;
  for (int i = 0; i < n;i++) {
    ret = *(s1_p++) - *(s2_p++);// 逐个比较，不相等就退出
    if (ret != 0)
      break;
  }
  return ret;
}
#endif