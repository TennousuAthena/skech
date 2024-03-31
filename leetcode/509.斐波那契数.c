#include<stdio.h>

int fib(int n){
    return n<=1? n : fib(n-1) + fib(n-2);
    // if(n<=1){
    //     return n;
    // }
    // int num[3] = {0, 1};
    // for(int i=2; i<=n; i++){
    //     num[i%3] = num[(i-1)%3] + num[(i-2)%3];
    // }
    // return num[n%3];
    // 呃呃优化后不如值钱了
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}
