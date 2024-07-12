#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000
/*keycode的第十五位为1，则说明有按键按下
  其余的位数为按键的键码，故按下的键码为keycode & ~KEYDOWN_MASK
*/

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t keycode = inl(KBD_ADDR);
  kbd->keydown = (keycode & KEYDOWN_MASK) ? true : false;
  if(kbd->keydown == true){
    kbd->keycode = keycode & ~KEYDOWN_MASK;
  }else{
    kbd->keycode = AM_KEY_NONE;
  }
}
