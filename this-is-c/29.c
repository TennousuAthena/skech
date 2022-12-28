/**
 * 编写函数函数void newcopy（char *new，char *old）
 * 其功能是删除old所指向字符串中的所有大写字母
 * 并将删除后的字符串存入new中。
 * 要求，在主函数中输入一个字符串并输出原始字符串
 * 调用上述函数后，输出删除了大写字母后的字符串
 * （本题不允许使用字符处理库函数）
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

void newcopy(char *new,char *old){
	int j=0;
	for(int i=0; i<lenStr(old); i++){
		if(old[i] >= 'A' && old[i] <= 'Z'){
		}else{
			new[j++] = old[i];
		}
	}
}



int main(){
	char str[] = "ThIs Is MY c";
	char str2[100];
	newcopy(str2, str);
	printf("%s", str2);
}
