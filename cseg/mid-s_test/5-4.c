#include<stdio.h>

int main(){
    float a,b,r;
    char method;
    scanf("%f%c%f", &a, &method, &b);
    switch(method){
        case '+':{r = a+b; break;}
        case '-':{r = a-b; break;}
        case '*':{r = a*b; break;}
        case '/':{
        if (b==0){
            printf("input error!");
            return 0;
        }
        r = a/b; break;}
        default:{printf("input error!"); return 0;}
    }
    printf("%.2f%c%.2f=%.2f", a, method, b, r);
}