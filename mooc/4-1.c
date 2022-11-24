// 从键盘读入一个自然，判定其是否为回文数，如果是，输出该数；否则，输出0


#include<stdio.h>

int main(){
    int num, test;
    scanf("%d", &num);
    test = num;
    if(num <0){
        return 0;
    }
    if(num >=0 && num <10){
        return 1;
    }
    int div = 1;
    int result = 0;
    while(num / div >= 10){
        div *=10;
    }
    while(num >0){
        int left = num / div;
        int right = num % 10;
        if(left != right){
            result++;
        }
        num = (num - div * left)/10;
        div/=100;
    }
    if(!result){
        printf("%d", test);
    }else{
        printf("0");
    }
    
}