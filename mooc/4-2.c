#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main(){
    double dx = 0.000001;
    double result = 0;
    int steps = PI / dx;
    for (int i=1; i<steps; i++){
        // printf("step%d, sin=%lf\n", i, dx * sin(dx * steps));
        result += dx * sin(dx * i);
    }

    printf("%lf", result);
}