#include <stdio.h>

int fac(int x){
	int r = 1;
	for(int i=1; i<=x; i++){
		r *= i;
	}
	return r;
}

int main(){
	int i;
	scanf("%d", &i);
	printf("%d", fac(i));
}
