/*输出m~n之间的素数（包括m和n，注意m和n的大小）。
【输入形式】
m n
【输出形式】
m~n之间的素数（m<n）*/
#include<stdio.h>

int is_prime_num(int num){
    for (int i=1; i<=num; i++){
        for (int j=2; j<=num/2 && j<i+1; j++){
            if(i*j ==num){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int m, n, a, b;
    scanf("%d%d", &m, &n);
    if(m>n)
        a = m, b=n;
    else
        a = n, b=m;
    for(int i=b; i<=a; i++){
        if (is_prime_num(i)){
            printf("%d ", i);
        }
    }
}