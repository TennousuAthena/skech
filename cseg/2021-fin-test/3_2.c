/*
  第三大题
  
  1．主观题
  
  （15分）
  
  编写函数int TimeCheck（char＊s）对指针s指向的字符串进行时间格式的校验：字符串长度为8，是否为“HH：MM：SS”格式的串。
  
  其中HH为2位数字的时信息，MM为2位数字的分信息，SS为2位数字的秒信息（无须考虑时间的有效范围，例如MM为70也是可以的）。
  
  要求：在主函数中读取键盘输入的文本信息，并调用函数TimeCheck后根据结果输出Yes或No两种结果。如有必要，可自行定义两个函数，分别用于判断是否为数字字符和＇：＇字符。

 */
#include<string.h>
#include<stdio.h>
int TimeCheck(char* s){
	char b[4], c[4], d[4];
	int a = sscanf(s, "%s：%s：%s", b, c, d);
}
int main(){
	char s[10];
	scanf("%s", s);
	TimeCheck(s) ? printf("Yes") : printf("No");
	
}
