#include<stdio.h>

// int minCostClimbingStairs(int* cost, int costSize){
//     for(int i=costSize-1; i>0; i--){
//         printf("cost[%d] = %d\n",i, cost[i]);
//         if(cost[i-1] > cost[i-2]){
//             // cost[i-1] = -999;
//             i--;
//             cost[i-2] += cost[i];
//         }else{
//             cost[i-1] += cost[i];
//         }
//     }
//     return cost[0];
// }

int min(int a, int b){
    return a>b? b : a;
}

int minCostClimbingStairs(int* cost, int costSize){
    int dp[3] = {0, 0};
    for(int i=2; i<=costSize; i++){
        dp[i%3] = min(dp[(i-1)%3] +cost[i-1], dp[(i-2)%3] +cost[i-2] );
    }
    return dp[costSize%3];
}

int main(){
    int n;
    int cost[] = {1,100,1,1,1,100,1,1,100,1};
    const int costSize = sizeof(cost) / sizeof(cost[0]);
    // scanf("%d", &n);
    printf("%d", minCostClimbingStairs(cost, costSize));
}
