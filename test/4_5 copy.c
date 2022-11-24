#include <stdio.h>
int main(){
    double input;
    int tmp;
    scanf("%lf", &input);
    input += 0.005;
    tmp = input * 1000;
    printf("%.2lf", tmp / 1000.0);
    return 0;
}