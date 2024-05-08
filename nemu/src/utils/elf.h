#include<common.h>
#include<elf.h>


typedef struct{
    char name[64];
    paddr_t addr;
    Elf32_Word size;
}Symbol;

extern Symbol *symbol;
void parse_elf(char *elf_file);
void display_call(word_t pc, word_t addr);
void display_ret(word_t pc, word_t adrr);