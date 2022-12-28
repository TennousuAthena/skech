/*
  编写函数void fun(char str[30],char a)，删除字符串str中所有a代表的字符
  被删除后的字符依次向前移动。
  要求：在主函数中初始化字符数组，并输入字符a，输出原字符数组及删除结果
  例如：初始化字符数组str[30]=”This is a test of C language.
  ，输入字符a=‘t’，则删除之后的结果为”This is a es of C language.”。
 */
#include<stdio.h>
#include<string.h>

void fun(char str[30],char a){
	for(int i=0;i<strlen(str);i++){
		if(str[i] == a){
			for(int j=i; j<strlen(str); j++){
				str[j] = str[j+1];
			}
		}
	}
}

int main(){
	char str[30];
	int i=0;
	while((str[i++] = getchar()) != '\n'){
	}
	char t;
	scanf("%c", &t);
	fun(str, t);
	printf("%s", str);
	return 0;
}
