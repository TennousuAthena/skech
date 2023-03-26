/**
 * Write a function to return the integer part of the floating-point number passed to this function.
 */
#include<cstdio>

int get_int(float fpnum){
	return (int) fpnum;
}

int main(){
	float x;
	scanf("%f", &x);
	printf("%d", get_int(-0.9));
}
