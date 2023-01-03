/**
 * 编写函数void intToString(int n,char *s)
 * 其功能是输入一个整数n
 * 将其转换为一个字符串s后输出
 * 要求：在main函数内，输入一个整数
 * 调用函数 intToString函数后输出处理后的数字串。
 */
#include<stdio.h>


void intToString(int n,char *s){
	int p=0; char tmp[500];
	while(n>0){
		tmp[p++] = (n%10) +'0';
		n/=10;
	}
	p-=1;
	s[p+1] = '\0';
	for(int i=0;p>=0; p--){
		s[i++] = tmp[p];
	}
	
}

int main(){
	int in;
	char str[500];
	scanf("%d", &in);
	intToString(in, str);
	printf("%s", str);
}


