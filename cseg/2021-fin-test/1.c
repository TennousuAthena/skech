#include<stdio.h>

int main(){
    int num;
    float result;
    scanf("%d", &num);
    if(num<100){
        result = num + 10;
    }else if(num >=100 && num <= 700){
        result = num - 50 *( num / 200);
    }else{
        result = num * 0.6;
    }
    printf("%.0f", result);
}