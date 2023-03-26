/**
 * Xn can be recursively defined as：
  X0=1; Xn=X*Xn-1 . Write a recursive function to return the value of Xn.
 */
#include<cstdio>

double pow(double X, double Y){
	return Y <= 1 ? X : pow(X, Y-1) * X;
}

int main(){
	float x, y;
	printf("Please input x, y:");
	scanf("%f %f", &x, &y);
	printf("x^y = %lf", pow(x, y));
}
