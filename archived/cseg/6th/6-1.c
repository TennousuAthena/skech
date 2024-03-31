/* 输入一个不多于9位的正整数，要求一、逆序输出各位数字，二、输出它是几位数。*/
#include<stdio.h>

int main(){
    char num[10];
    scanf("%s", num);
    int count=0;
    for(int i=9; i>=0; i--){
        if (num[i]>='0' && num[i]<='9'){
            putchar(num[i]);
            if(num[i-1]>='0' && num[i-1]<='9')
                putchar(' ');
            count++;
        }
    }
    printf("\n%d digit number", count);
}