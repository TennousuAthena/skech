#include <stdio.h>
//#include <math.h>

int main(void)
{
    double a, b, c, delta, result[2];
    printf("二次方程ax^2+bx+c=0的系数 a b c:");
    scanf("%lf%lf%lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
	if(delta > 0){
		result[0] = (-b + delta) / 2 * a;
		result[1] = (-b - delta) / 2 * a;
		printf("该方程有两个不同的根: %lf %lf", result[0], result[1]);
	}else if (delta == 0){
		result[0] = (-b + delta) / 2 * a;
		printf("该方程有两个相同的根: %lf", result[0]);
	}else{
		printf("该方程无实数根");
	}
    return 0;
}