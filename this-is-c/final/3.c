/*
  编写字符串过滤函数int filterch(char* str)
  其功能是：只保留str中非零数字字符
  并计算其中奇数数字之积
  例如：str为ad12AB3#f4()s%*05678
  过滤后str为12345678，其中奇数数字之积为105
  要求：在主函数中初始化一个包含任意大小写英文字母、
  本人学号及其他字符的字符串（字符串长度不超过20），
  调用过滤函数filterch，
  分行输出原始字符串、过滤后的字符串及计算结果。
  （不允许使用字符串处理库函数）
 */
#include<stdio.h>

int myStrLen(char* str){
	int len = 0;
	while(str[len++] != '\0');
	return len-1;
}

int filterch(char* str){
	char newStr[20];
	int j=0, result=1;
	for(int i=0; i<myStrLen(str); i++){
		if(str[i] > '0' && str[i] <= '9'){
			newStr[j++] = str[i];
			if((str[i] - '0') %2 ==1){
				result *= str[i] - '0';
			}
		}
	}
	newStr[j++] = '\0';
	for(int i=0; i<j; i++){
		str[i] = newStr[i];
	}
	return result;
}

int main(){
	char myStr[] = "AB3#f4(20227291)s%*";
	printf("Original string: %s\n", myStr);
	int result = filterch(myStr);
	printf("Filtered string: %s\nResult:%d", myStr, result);
}
