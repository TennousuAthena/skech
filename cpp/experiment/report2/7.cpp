/**
 * The sub function is called to realize the exchange of two numbers, and the pointer is used for parameter.
 */
#include<cstdio>

void swap(int* a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){
	int a=1, b=2;
	printf("Before Swap: a, b=%d, %d\n", a, b);
	swap(&a, &b);
	printf("After Swap: a, b=%d, %d", a, b);
}
