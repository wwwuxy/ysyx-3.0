#include<common.h>
#include<elf.h>

#ifdef CONFIG_FTRACE
typedef struct{
    char name[64];
    paddr_t addr;
    Elf32_Word size;
}Symbol;

Symbol *symbol = NULL;
int func_count = 0;

void  parse_elf(char *elf_file){
    Assert(elf_file != NULL,"can't open elf\n");
    // printf("%s",elf_file);

    FILE *fp = NULL; 
    fp = fopen(elf_file,"rb");
    Assert(fp != NULL,"can't open fp\n");


    Elf32_Ehdr ehdr;    //elf头
    Assert(fread(&ehdr,sizeof(Elf32_Ehdr),1,fp)>0,"can't read elf");//读取elf头
    fseek(fp, ehdr.e_shoff, SEEK_SET);    //定位至节头表

    // printf("版本信息是：%d\n",ehdr.e_version);
    // printf("节的数量是: %d\n",ehdr.e_shnum);

   

    Elf32_Shdr shdr;    //节头
    char *stringtab = NULL;   //store strtab
 
    for(int i=0; i<ehdr.e_shnum; i++){ //依次读取节头表，找strtab
        Assert(fread(&shdr,sizeof(Elf32_Shdr),1,fp)>0,"can't read shdr\n");
        if(shdr.sh_type == SHT_STRTAB){
            stringtab = malloc(shdr.sh_size);
            fseek(fp,shdr.sh_offset,SEEK_SET);
            Assert(fread(stringtab, shdr.sh_size, 1, fp)>0,"can't store strlab\n");  //store

            // printf("shdr.sh_size is %d \n",shdr.sh_size);
            // printf("strlab is %d \n",stringtab[20]);
            break;
        }
    }



    //寻找符号表
   
    fseek(fp,ehdr.e_shoff,SEEK_SET);    //重新定位至节头表
    Elf32_Sym sym;  //符号表

    for(int i=0; i<ehdr.e_shnum; i++){
        Assert(fread(&shdr,sizeof(Elf32_Shdr),1,fp)>0,"can't read shdr\n");  //依次遍历节头表，找Symtab

        if(shdr.sh_type == SHT_SYMTAB){
            size_t symcount = (shdr.sh_size/shdr.sh_entsize);
            symbol = malloc(sizeof(Symbol) * symcount);

            // printf("symcount is %ld\n",symcount);

            fseek(fp, shdr.sh_offset, SEEK_SET); //定位至符号表

            // printf("shdr.sh_type is %d \n",shdr.sh_type);


            for(size_t j=0; j<symcount; j++){  //依次遍历符号表条目
                Assert(fread(&sym, sizeof(Elf32_Sym), 1, fp)>0,"can't read symlab\n");

                
                if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC){     //Extract a type from an st_info value

                    const char *name = stringtab + sym.st_name;   //获取偏移量
            
                    strncpy(symbol[func_count].name, name, sizeof(symbol[func_count].name)-1);
                    symbol[func_count].addr = sym.st_value;
                    symbol[func_count].size = sym.st_size;
                    func_count++;
                }
            }

        }
    }
    // printf("func_count is %d\n",func_count);
    fclose(fp);
    free(stringtab);
}

// int depth = 1;
void display_call(word_t pc, word_t addr){
    int i = 0;
    for(;i<func_count;i++){
        if(addr >= symbol[i].addr && addr < symbol[i].size + symbol[i].addr){   //找到地址所在的区间
            break;
        }
    }
    // depth++;
    printf("0x%08x:  ",pc);
    printf("call [%s@0x%08x]\n",symbol[i].name,symbol[i].addr);
}

void display_ret(word_t pc, word_t addr){
    int i = 0;
    for(;i<func_count;i++){
        if(addr >= symbol[i].addr && addr < symbol[i].size + symbol[i].addr){   //找到地址所在的区间
            break;
        }
    }    
    // depth--;
    printf("0x%08x:  ",pc);
    printf("ret [%s]\n",symbol[i].name);
}
#endif