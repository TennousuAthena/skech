#include<stdio.h>

int tribonacci(int n){
    if(n<=1)
        return n;
    if(n==2)
        return 1;
    int num[4] = {0, 1, 1};
    for(int i=3; i<=n; i++){
        num[i%4] = num[(i-1)%4] + num[(i-2)%4] + num[(i-3)%4];
    }
    return num[n%4];
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", tribonacci(n));
}
