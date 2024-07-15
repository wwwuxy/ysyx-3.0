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
  uint32_t screen_wh = inl(VGACTL_ADDR);
  uint32_t h = screen_wh & 0xffff;
  uint32_t w = screen_wh >> 16;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = w, .height = h,
    .vmemsz = 0
  };
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
      fb[(y + j) * width + (x + i)] = pixels[j * screen_width + i];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1); //写入同步寄存器
  }
}


void __am_gpu_status(AM_GPU_STATUS_T *status) { //调用同步寄存器
  status->ready = true;
}
