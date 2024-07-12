#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  // int i;
  // int w = 400;
  // int h = 300;
  // uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  // for (i = 0; i < w * h; i ++) {
  //   fb[i] = i;
  // }
  // outl(SYNC_ADDR, 1); //写入同步寄存器
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 0, .height = 0,
    .vmemsz = 0
  };
  cfg->width = (inl(VGACTL_ADDR) >> 16) & 0xffff;   //读取屏幕大小
  cfg->height = inl(VGACTL_ADDR) & 0xffff;
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t screen_width = ctl->w;
  uint32_t screen_height = ctl->h;
  uint32_t x = ctl->x;
  uint32_t y = ctl->y;
  if(!ctl->sync && (screen_width == 0 || screen_height == 0)) return;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pixels = ctl->pixels;
  uint32_t width = (inl(VGACTL_ADDR) >> 16) & 0xffff;
  for (int j = 0; j < screen_height; j++) {
    for (int i = 0; i < screen_width; i++) {
      fb[(y + j) * width + (x + i)] = pixels[j * width + i];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1); //写入同步寄存器
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { //调用同步寄存器
  status->ready = true;
}
