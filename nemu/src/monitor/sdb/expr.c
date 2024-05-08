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

#include <isa.h>
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include"sdb.h"

enum {                       //枚举token
  TK_NOTYPE = 256,
  TK_EQ,
  TK_DATA,
  TK_NEQ,
  TK_AND,
  TK_HEX,
  TK_REG,
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"\\+",'+'},		// plus  
  {"\\-",'-'},            //sub

  {"\\*",'*'},	
  {"\\/",'/'},
  {" +",TK_NOTYPE},   // spaces   空格可能不止一个,故要加上+

  
  {"\\(",'('},
  {"\\)",')'},

  {"==",TK_EQ},        // equal
  {"!=",TK_NEQ},
  {"\\&\\&",TK_AND},
  {"0[xX][0-9a-fA-F]+",TK_HEX},   //OX....
  {"\\$[a-zA-Z]*[0-9]*",TK_REG}, //register
  {"[0-9]*",TK_DATA},      //data
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {   //记录token的信息
  int type;             //记录类型
  char str[32];        //记录相应字串
} Token;

static Token tokens[32] __attribute__((used)) = {};	//__attribute__((used))用来防止tokens因未被显示使用而被优化
static int nr_token __attribute__((used))  = 0;  //记录已经识别的token数目

static bool make_token(char *e) {    //识别token
  int position = 0;   //指示当前处理的位置
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {  //表达式规则,待匹配字符串,最多将几个结果保存,保存的数组
        char *substr_start = e + position;    //string+pmatch.rm_so 到 string+pmatch.rm_eo 就是我们匹配的字符串
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);   //输出识别成功信息

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
	  case TK_NOTYPE:
      			break;		//空格不处理
	  case '+':
			tokens[nr_token].type = rules[i].token_type;
      			nr_token++;
     		 	break;
   	  case '-':
      			tokens[nr_token].type = rules[i].token_type;
      			nr_token++;
      			break;
    	  case '*':
      			tokens[nr_token].type = rules[i].token_type;
			assert(substr_len<32);
			strncpy(tokens[nr_token].str,substr_start,substr_len);
			tokens[nr_token].str[substr_len] = '\0' ;
      			nr_token++;
      			break;
    	  case '/':
      			tokens[nr_token].type = rules[i].token_type;
      			nr_token++;
      			break;
          case TK_DATA:
			assert(substr_len<32);   //溢出
			strncpy(tokens[nr_token].str,substr_start,substr_len);     //将数字放入token.str
			tokens[nr_token].str[substr_len] = '\0' ;
     			tokens[nr_token].type = rules[i].token_type;
			nr_token++;
      			break;
	  case TK_EQ:
                        tokens[nr_token].type = rules[i].token_type;
						strcpy(tokens[nr_token].str,"==");
                        nr_token++;
                        break;
	  case TK_NEQ:
                        tokens[nr_token].type = rules[i].token_type;
						strcpy(tokens[nr_token].str,"!=");
                        nr_token++;
                        break;
	  case TK_AND:
                        tokens[nr_token].type = rules[i].token_type;
                        strcpy(tokens[nr_token].str,"&&");
                        nr_token++;
                        break;
	  case TK_HEX:
                        assert(substr_len<32);  
                        strncpy(tokens[nr_token].str,substr_start,substr_len);   
                        tokens[nr_token].str[substr_len] = '\0' ;
                        tokens[nr_token].type = rules[i].token_type;
                        nr_token++;
                        break;
	  case TK_REG:
                        assert(substr_len<32); 
                        strncpy(tokens[nr_token].str,substr_start,substr_len);  
                        tokens[nr_token].str[substr_len] = '\0' ;
                        tokens[nr_token].type = rules[i].token_type;
                        nr_token++;
                        break;
	  case '(':
			tokens[nr_token].type = rules[i].token_type;
			nr_token++;
			break;
	  case')':
			tokens[nr_token].type = rules[i].token_type;
			nr_token++;
			break;
		
	  default:
			printf("No This Type!\n");
			assert(0);

        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;      //词法分析失败
    }
  }

  return true;
}


  /* TODO: Insert codes to evaluate the expression. */
//  TODO();

bool check_parentheses(uint32_t low,uint32_t high){    //检查是否满足"(" <expr> ")"  
	int n = 0;
	if(tokens[low].type == '(' && tokens[high].type == ')'){    //最两侧是一对括号
		for(int i = low+1;i<high;i++){
			if(tokens[i].type == '(') 
				n++;
			if(tokens[i].type == ')'){ 
				n--;
				if(n<0)
					return false;
			}
		}
		if(n == 0) 
			return true;
	}
	return false;
}

void int_char(int x,char str[]){	//实现int到char的转换
	int tmp = x;
	int x_index = 0;	//表示x的位数
	while(tmp){
		tmp /= 10;
		x_index++;	//求x的位数
	}
	memset(str,0,x_index);
	int i = x_index;
	int n = i;
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



int major_op(uint32_t low,uint32_t high){   //find mojor op  
	int n = 0;     //check if inside () or not 
	int majorop = 0;     //major是记录主运算符在数组tokens中的位置，通过tokens.type调用
	bool is_parenthese = check_parentheses(low,high);  //检查最两侧是否有括号
	if(is_parenthese){
		for(int i = low+1;i<high;i++){   // 剔除最两侧都是括号的情况
			if(tokens[i].type != TK_DATA){
				if(tokens[i].type == '(') n++;
				else if(tokens[i].type == ')')n--;
				else if(n==0 && (tokens[i].type == '*' || tokens[i].type =='/')){  //括号内的符号不可能是major_op
					if(majorop == 0 || tokens[majorop].type == '*' || tokens[majorop].type == '/')
					       	majorop = i;}		
				else if(n==0 && (tokens[i].type == '+' || tokens[i].type =='-')){
					if(tokens[majorop].type != '+' && tokens[majorop].type != '-') 
						majorop = i;}  //优先级最低的为主运算符
			}
		}
	}
	else{
		for(int i = low;i<high;i++){		//不关心tokens[high].type的值   
			if(tokens[i].type != TK_DATA){
				if(tokens[i].type == '(') n++;
				else if(tokens[i].type == ')')n--;
				else if(n==0 && (tokens[i].type == '*' || tokens[i].type =='/')){  //括号内的符号不可能是major_op
					if(majorop == 0 || tokens[majorop].type == '*' || tokens[majorop].type == '/')
					       	majorop = i;}		
				else if(n==0 && (tokens[i].type == '+' || tokens[i].type =='-')){
					if(tokens[majorop].type != '+' && tokens[majorop].type != '-') 
						majorop = i;}  //优先级最低的为主运算符
	
			}
		}
	}
	return majorop;
} 

typedef struct result {        //struct for eval()   
	bool valid;
	uint32_t  data;	
}Result;

Result eval(uint32_t low, uint32_t high) {    //表达式计算
  Result result,val1,val2;
  int op;
  result.valid = true;     //inital true

  if (low > high) {
    /* Bad expression */
	result.valid = false;
	printf("Bad exprsssion!\n");
	return result;	
  }
  else if (low == high) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
	 result.valid = true;
	 result.data = strtol(tokens[low].str,NULL,10);      //change str to number
	 return result; 
  }
  else if (check_parentheses(low, high) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(low + 1, high - 1);  //去掉两侧括号
  }
  else {
    op = major_op(low,high);
    val1 = eval(low, op - 1);
    val2 = eval(op + 1, high);
    if(val1.valid && val2.valid)
	    result.valid = true;
    else{
    	result.valid = false;
	return result;
    }

    switch (tokens[op].type) {
      case '+': 
	      result.data = val1.data + val2.data;
	      break;
      case '-': 
	      result.data =  val1.data - val2.data;
	      break;
      case '*': 
	      result.data = val1.data * val2.data;
	      break;
      case '/': 
	      result.data = val1.data / val2.data;
	      assert(val2.data != 0);
	      break;
      case TK_EQ:
              result.data = val1.data == val2.data;
              break;
      case TK_NEQ:
              result.data = val1.data != val2.data;
              break;
      case TK_AND:
              result.data = val1.data && val2.data;
              break;

      default: 
	      assert(0);
    }
  }
  return result;
}


word_t expr(char *e, bool *success) {
  Result result;
  bool flag = make_token(e);
  if (!flag) {	                     //token识别失败
    *success = false;
    return 0;
  }
  uint32_t tmp;			//临时保存int型数据,预处理表达式

  for(int i = 0;i<nr_token;i++){
	bool success = true;
  	if(tokens[i].type == TK_REG){    //register
		tmp = isa_reg_str2val(tokens[i].str,&success);	//read register
		if(success){
			int_char(tmp,tokens[i].str);		//int--->char
			tokens[i].type = TK_DATA;
		}else{
			printf("Error Transform!\n");
			assert(0);	
		}
			
	}
  }
  for(int i = 0;i<nr_token;i++){
	if(tokens[i].type == TK_HEX){	//16进制
		char *adr = tokens[i].str + 2;		//去除0X
		tmp = strtol(adr,NULL,16);  	//16--->10
		if(tmp == 0){
			printf("Error Transform!\n");
			assert(0);
		}
		int_char(tmp,tokens[i].str);
		tokens[i].type = TK_DATA;
	}
  }
  for(int i = 0;i<nr_token;i++){
	if(tokens[i].type == '*'){			//引用
		if(tokens[i-1].type != TK_DATA && tokens[i-1].type != ')'){
			char *adr = tokens[i].str + 1;
			vaddr_t add;
			sscanf(adr,"%x",&add);		//get address
			tmp = vaddr_read(add,4);			//read memory
			int_char(tmp,tokens[i].str);
		}
	}
  }
 
  result = eval(0,nr_token-1);
  *success = result.valid;
  return result.data;
}