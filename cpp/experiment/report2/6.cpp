/**
 * Input strings from the keyboard, call the sub function to count the number of lowercase letters in each string, 
 * and set a static variable to count the total number of lowercase letters in all input strings.
 */
#include<cstdio>

int count_lcl(char* str){
	static int result = 0;
	int i=0;
	while(str[i] != '\0'){
		if(str[i] >= 'a' && str[i] <= 'z'){
			result++;
		}
		i+=1;
	}
	return result;
}

int main(){
	char c[100000]; 
	gets(c);
	printf("%d", count_lcl(c));
}
