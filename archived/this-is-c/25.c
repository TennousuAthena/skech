/*
  编写函数catStr(char str1[],char str2[])用于进行两个字符串的连接
  编写函数lenStr(char str[])用于统计一个字符串的长度
  并在主函数中调用。要求：不允许使用strcat()和strlen()字符处理库函数
  在主函数以直接初始化的方式输入两个字符串str1和str2。
  如输入str1为"howareyou"，str2为"me"，调用catStr函数后str1为"howareyoume"
  调用lenStr函数后输出11。
 */
#include<stdio.h>

int lenStr(char str[]){
	int count=0, i=0;
	while(1){
		if(str[i++] != '\0')
			count++;
		else
			return count;
	}
}
void catStr(char str1[],char str2[]){
	for(int i=0; i<=lenStr(str2); i++){
		str1[lenStr(str1)] = str2[i];
	}
}

int main(){
	char str[100] = "ni";
	catStr(str, "hao");
	printf("%s", str);
}


