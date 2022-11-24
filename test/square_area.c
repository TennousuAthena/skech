//gcc

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, s, result;
    printf("请输入三边长度 a b c:");
    scanf("%lf%lf%lf", &a, &b, &c);
    s = (a + b + c) / 2;
    result = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("该三角形的面积是%lf", result);
    return 0;
}