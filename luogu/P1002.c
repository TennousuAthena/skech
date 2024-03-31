#include<stdio.h>
int main(){
    char map[25][25] = {0};
    const int p = 2;   //padding, 防止马的走位越界
    int bx, by, mx, my;
    scanf("%d%d%d%d", &bx, &by, &mx, &my);
    map[mx+p][my+p] = 1;

    map[mx-2+p][my+1+p] = 1;
    map[mx-1+p][my+2+p] = 1;
    map[mx+2+p][my+1+p] = 1;
    map[mx+1+p][my+2+p] = 1;
    map[mx-2+p][my-1+p] = 1;
    map[mx-1+p][my-2+p] = 1;
    map[mx+2+p][my-1+p] = 1;
    map[mx+1+p][my-2+p] = 1;

    unsigned long long dp[25][25] = {0};
    dp[p][p] = 1;
    for(int i=p; i<=bx+p; i++){
        for(int j=p; j<=by+p; j++){
            if(map[i][j]){
                dp[i][j] = 0;
                continue;
            }
            if(i==p &&j==p){
                dp[i][j] = 1;
            }else if(i==p){
                dp[i][j] = dp[i][j-1];
            }else if(j==p){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
            // printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
        }
    }
    // printf("dp[%d][%d] = %llu\n", p+bx, p+by, dp[p+bx][p+by]);
    printf("%llu", dp[p+bx][p+by]);



}