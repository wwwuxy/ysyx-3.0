/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>



// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int index_buf = 0;

int choose(int n){
	int num = rand() % n;
	return num;
}


void gen(char type){
	buf[index_buf ++] = type;
//	buf[index_buf] = '\0';
}

void gen_num(){
	int r;
	r = rand();
        char data = (r % 10) + '0';
	while(data == '0'){
		r = rand();
		data = (r %10 ) + '0';
	}
        gen(data);
}


void gen_rand_op(){
	switch(choose(4)){
		case 0:
				gen('+');
				break;
		case 1:
		      	gen('-');
		      	break;
		case 2:
		       gen('*');
		       break;
		default:
		       gen('/');
		       break;
	}
}


static void gen_rand_expr() {
  	if(index_buf > 65535 - 10000){
		gen('(');
   		gen_num();
		gen(')');
		return ;
//		printf("oversize!");
//		assert(0);
	}
/*	if(buf[index_buf - 1] == ')'){
		gen_rand_op();
	}
	gen_num();
*/	switch(choose(3)){
		case 0:

				gen_num();
				break;
       	case 1:
            	gen('(');
		       	gen_rand_expr();
		       	gen(')');
		       	break;
		default:
		       	gen_rand_expr();
		       	gen_rand_op();
		       	gen_rand_expr();
		       break;		       
	}
}

/**************************************过滤除0***************************************************/
bool check_parentheses(int low,int high){    //检查是否满足"(" <expr> ")"  
	int n = 0;
	if(buf[low] == '(' && buf[high] == ')'){    //最两侧是一对括号
		low++;
		while(low<high){
			if(buf[low] == '(') 
				n++;
			if(buf[low] == ')'){ 
				n--;
				if(n<0)
					return false;
			}
			low++;
		}
		if(n == 0) 
			return true;
	}
	return false;
}


int major_op(int low,int high){   
	int n = 0;     //check if inside () or not 
	int majorop = -1;     //major记录主运算符

	bool is_parenthese = check_parentheses(low,high);  //检查最两侧是否有括号
	if(is_parenthese){
        low++;
		high--;
		while(low<high){   // 剔除最两侧都是括号的情况
			if(!(buf[low]<='9' && '0'<=buf[low])){
				if(buf[low] == '(') n++;
				else if(buf[low]== ')')n--;
				else if(n==0 && (buf[low] == '*' || buf[low] =='/')){  //括号内的符号不可能是major_op
					if(majorop == -1 || buf[majorop] == '*' || buf[majorop] == '/')
					       	majorop = low;}		
				else if(n==0 && (buf[low] == '+' || buf[low] =='-')){
					if(buf[majorop] != '+' && buf[majorop] != '-') 
						majorop = low;}  //优先级最低的为主运算符
			}
			low++;
		}
	}
	else{
		while(low<high){   // 剔除最两侧都是括号的情况
			if(!(buf[low]<='9' && '0'<=buf[low])){
				if(buf[low] == '(') n++;
				else if(buf[low]== ')')n--;
				else if(n==0 && (buf[low] == '*' || buf[low] =='/')){  //括号内的符号不可能是major_op
					if(majorop == -1 || buf[majorop] == '*' || buf[majorop] == '/')
					       	majorop = low;}		
				else if(n==0 && (buf[low] == '+' || buf[low] =='-')){
					if(buf[majorop] != '+' && buf[majorop] != '-') 
						majorop = low;}  //优先级最低的为主运算符
			}
			low++;
		}
	}
	return majorop;
} 

int find_last(int low,int high){
	int n = 0;
	int i;
	bool have = false;
	for(i = low;i<high;i++){
		if(buf[i] == '(') {
			n++;
			have = true;
		}
		if(buf[i] == ')') n--;
		if(have){
			if(n == 0) return i;
		}
	}
	return i;
	
}


unsigned int eval(int low,int high) {    //表达式计算
  unsigned result,val1,val2;
  int op;

  if (low == high) {
    return (buf[low]) - '0';
  }
  else if (check_parentheses(low,high) == true) {
    return eval(low+1,high-1);  //去掉两侧括号
  }
  else {
    op = major_op(low,high);
	if(op == -1) {
		if(low<=high-1)
		return eval(low,high - 1);
	}	
    val1 = eval(low,op-1);
    val2 = eval(op+1,high);

    switch (buf[op]) {
      case '+': 
	      result = val1 + val2;
	      break;
      case '-': 
	      result =  val1 - val2;
	      break;
      case '*': 
	      result = val1 * val2;
	      break;
      case '/': 
			if (val2 != 0) {
                result = val1 / val2;
            } else {
                return 0;
            }
	      break;
      default: 
	      assert(0);
    }
  }
  return result;
}




void check_division(bool *is_zero) {
  int i = index_buf-1;
//  printf("check_division 中的 i 是%d\n",i);
  unsigned result;
  for (;i>0;i--) {
    if (buf[i] == '/') {	//判断从i+1开始的表达式是否为0
		int last = find_last(i+1,index_buf-1);	//针对类似“7)))))”的情况
		result = eval(i+1,last);
		if(result == 0) {
//			printf("check_division 中的 last 是 %d\n",last);

			*is_zero = true;
			return;
		}
    }
  }
}

/****************************************过滤除0***********************************************/


int main(int argc, char *argv[]) {
  int seed = time(0);     //get time,different seed can get different srand
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);  //argv[1] -> loop
  }
  int i;
  for (i = 0; i < loop; i ++) {
	bool is_zero = false;		//如果定义在循环内，将永远为true
    gen_rand_expr();

//	printf("%s\n",buf);

	buf[index_buf] = '\0';


	check_division(&is_zero);	//检查是否有除0错误

	int tmp = eval(0,index_buf-1);

	if(is_zero || tmp < 0){	//若有除0错误，则重新生成一个，将其过滤
		if(i>0)i--;
		else i = 0;
//		printf("中间有0\n");
//		getchar();
		memset(buf,'\0',sizeof(buf));	//重置buf
		index_buf = 0;
		continue;
	}
	
  
    sprintf(code_buf, code_format, buf);    //将buf以code_format的形式保存在code_buf中

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");  //shell--compile
    if (ret != 0) continue;    //fail 

    fp = popen("/tmp/.expr", "r");    //创建管道，执行shell命令将文件流中的某些数据读出
    assert(fp != NULL);      //fail return NULL

    unsigned result;
    ret = fscanf(fp, "%d", &result);   //fp -> result
    pclose(fp);     //popen -- pclose


    printf("%u %s\n", result, buf);
    index_buf = 0;
  }
  return 0;
}