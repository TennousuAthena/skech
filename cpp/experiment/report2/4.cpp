/**
 * Enter three numbers from the keyboard and calculate the greatest common divisor of the three numbers.
 */
#include<cstdio>

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int a, b, c;
	printf("Please input a, b, c >");
	scanf("%d %d %d",  &a, &b, &c);
	printf("The greatest common divisor is %d", gcd(a, gcd(b, c)));
}
