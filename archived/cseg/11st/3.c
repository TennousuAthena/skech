#include <stdio.h>

int isprime(int x){
	for(int i=2; i<=x/2; i++){
		if(x % i ==0)
			return 0;
	}
	return 1;
}

int main(){
	int i;
	scanf("%d", &i);
	printf("%d", isprime(i));
}
