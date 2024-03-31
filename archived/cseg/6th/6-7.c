#include<stdio.h>

int main(){
    float r1=0, r2=0;
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        r1+= 1.0 / i;
    }
    for(int i=1; i<=a; i++){
        (i%2 == 1)?  (r2+= 1.0 / (float)i) : (r2-= 1.0 / (float)i);
    }


    printf("%.2f\n%.2f\n", r1, r2);
}