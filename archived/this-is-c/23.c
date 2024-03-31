/*
  编写函数int StrCount(char* str1,char* str2)。
  Str1和str2为两个输入的字符串。函数统计str2在str1中出现的次数
  ，返回该数值。要求：在主函数main中初始化str1和str2，
  调用函数StrCount(str1,str2)后输出结果。如输入str1为"howareyouareGGGare"，
  str2为"are"，那么调用函数StrCount后函数返回3。
 */
#include<stdio.h>
#include<string.h>

int StrCount(char* str1,char* str2){
	int count=0;
	for(int i=0;i<strlen(str1);i++){
		for(int j=0; j< strlen(str2); j++){
			if(str1[i+j] != str2[j]){
//				printf("str1[%d]%c != str2[%d]%c\n",i+j, str1[j+i], j,str2[j]);
				break;
			}
			if(j == strlen(str2)-1){
				count++;
			}
		}
	}
	return count;
}

int main(){
	char str1[] = "howareyouareGGGareaa";
	char str2[] = "are";
	printf("%d", StrCount(str1, str2));
}
