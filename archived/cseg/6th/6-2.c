/*在屏幕上输出m以内所有满足要求的数。
要求：该数除了1和本身之外所有因子之和为n，如果没有满足条件的数则输出"no such numbers"
【输入形式】
m n
【输出形式】

除了1和本身之外所有因子之和为n的数

或

"no such numbers"*/
#include<stdio.h>

int get_factor_count(int num){
    int result = 0;
    for (int i=1; i<=num; i++){
        for (int j=2; j<=num/2 && j<i+1; j++){
            if(i*j ==num && i!= j){
                result += i;
                result += j;
            }
            else if(i*j ==num && i== j)
                result += i;
        }
    }
    return result;
}

int main(){
    int m, n, f, flag=0;
    scanf("%d%d", &m, &n);
    for(int i=0; i<=m; i++){
        f = get_factor_count(i);
        // printf("m=%d, f=%d\n", m, f);
        if (f == n){
            flag++;
            printf("%d ", i);
        }
    }
    if(!flag)
        printf("no such numbers");
}