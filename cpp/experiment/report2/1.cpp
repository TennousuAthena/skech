/**
 * Write a function called Ads () to receive a single precision number passed to it, 
 * then calculate its absolute value and display the absolute value.
 */
#include<cstdio>

float Ads(float x){
	return x>0 ? x : -x;
}

int main(){
	float input;
	scanf("%f", &input);
	printf("The absolute value of the input is %f", Ads(input));
}
