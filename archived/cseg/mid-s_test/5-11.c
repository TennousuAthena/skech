#include<stdio.h>

int main(){
    int a, i=2;
    scanf("%i", &a);
    while(a>1){
        while(a % i== 0){
            if(a/i !=1)
            printf("%d*", i);
            else
            printf("%d", i);
            a/=i;
        }
        i++;
    }
    printf("\b");

}