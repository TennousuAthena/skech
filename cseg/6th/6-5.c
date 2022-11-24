/*求s = a +aa + aaa + aaaa +  ...，其中一个a是一个数字。
例如，输入2 5，则s=2 + 22 + 222 + 2222 + 22222（此时共有5个数相加）。
【输入形式】
a n
【输出形式】
a +aa + aaa + aaaa （n个数）的和*/
#include<stdio.h>

int getNum(int num, int amount){
    int result = num;
    for(int i=1; i< amount; i++){
        result = result * 10 + num;
    }
    return result;
}

int main(){
    int a, n;
    scanf("%d%d", &a, &n);
    int result = 0;
    for(int i=1; i<=n; i++){
        result += getNum(a, i);
    }
    printf("%d", result);
}