#include <stdio.h>

int climbStairs(int n){
    if(n <=1){
        return 1;
    }
    int s[46];
    s[0] = 1;
    s[1] = 1;
    for(int i=2; i<=n; i++){
        s[n] = s[n-1] + s[n-2];
        printf("Step %d: %d\n", i, s[i]);
    }
    return s[n];
}

int main() {
    int n1;

    scanf("%d", &n1);

    printf("n = %d, result = %d\n", n1, climbStairs(n1));

    return 0;
}
