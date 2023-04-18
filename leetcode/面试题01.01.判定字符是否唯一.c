#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isUnique(char* astr){
	bool alphabet[27];
	memset(alphabet, 0, 27);
	for(int i=0; i<strlen(astr); i++){
		if(alphabet[astr[i] - 'a'])
			return false;
		alphabet[astr[i] - 'a'] = 1;
	}
	return true;
}

int main(){
	printf("%d", isUnique("vrce"));
}
