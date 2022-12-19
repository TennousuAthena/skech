#include<stdio.h>
#include<string.h>

int myAtoi(char * s){
	int flag = 0;
	for(int i=0; i<strlen(s); i++){
		if((s[i] >='0' && s[i]<='9') || (s[i] == '+' || s[i] == '-' || s[i] == ' ')){
			if(flag)
				s[i] = ' ';
		}else{
			flag = 1;
		}
	}
	int r;
	sscanf(s, "%d", &r);
	return r;
}

int main(){
	printf("%d", myAtoi("words and 987"));
}
