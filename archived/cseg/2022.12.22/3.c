#include<stdio.h>
#include<string.h>
/*
  编写函数void fun(char *s, char *s1, char *s2)，将s所指向的字符串中的数字转化为数字串存放在s1所指向区域，字母字符转化为字符串存放在s2所指向的区域。主函数中输入字符串，调用函数后输出转换后结果。
  【输入形式】
  字符串
  【输出形式】
  分离结果
  【样例输入】
 */

void fun(char *s, char *s1, char *s2){
	int ps1=0, ps2=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='0' && s[i]<='9'){
			s1[ps1++] = s[i];
		}else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			s2[ps2++] = s[i];
		}
	}
}

int main()
{
	char s[6666], s1[6666], s2[6666];
	scanf("%s", s);
	fun(s, s1, s2);
	printf("%s\n%s", s1, s2);
	
}
