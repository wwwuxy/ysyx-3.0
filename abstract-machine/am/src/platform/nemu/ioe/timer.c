#include <am.h>
#include <nemu.h>

static uint64_t boot_time = 0;

void __am_timer_init() {
  // outl(RTC_ADDR, 0);
  // outl(RTC_ADDR + 4, 0);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t hi = inl(RTC_ADDR + 4);
  uint32_t lo = inl(RTC_ADDR);
  uint64_t time = ((uint64_t)hi << 32) | lo;
  uptime->us = time - boot_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
