/**
 * Input two floating-point numbers from the keyboard, call a sub function to realize the sum and difference of the two numbers,
 *  and send the results to the callback function through the formal parameters
 */
#include<cstdio>

void output(float sum, float diff){
	printf("The sum is %f, the diff is %f", sum, diff);
}

void calc(float a, float b, void (*callback)(float, float)){
	float sum = a + b;
	float diff = a - b;
	
	callback(sum, diff);
	
}

int main(){
	float a, b;
	printf("Please input two numbers:");
	scanf("%f %f", &a, &b);
	calc(a, b, output);
}
