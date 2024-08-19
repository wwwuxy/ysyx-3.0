ENTRY(_start)
PHDRS { 
  text PT_LOAD; 
  data PT_LOAD; 
}

SECTIONS {
  /* 代码段和只读数据段在 MROM 中 */
  . = 0x20000000;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  }

  /* 数据段和未初始化数据段映射到 SRAM 中 */
. = 0x0f000000;
.data : {
    *(.data*)
} : data
edata = .;
_data = .;

.bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
}
end = .;
_end = .;

/* 栈和堆配置在 SRAM 的指定区域 */
_heap_start = _end;  /* 堆从 .bss 段的结束地址开始 */
_heap_end = _heap_start + 0xfff;  /* 堆大小为 4kB */

_stack_top = 0x0f001fff;  /* 栈顶地址 */
_stack_end = _heap_end;  
_stack_pointer = _stack_top; 

}
