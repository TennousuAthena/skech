#include <stdio.h>

int sum(int x){
	int sum = 0;
	while(x >0){
		sum += x%10;
		x/=10;
	}
	return sum;
}

int main(){
	int i;
	scanf("%d", &i);
	printf("%d", sum(i));
}
