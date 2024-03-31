#include<stdio.h>

int main(){
    char in[100];
    scanf("%s", in);
    int sum;
    int i=0;
    while(in[i] != '\0'){
        // printf("%d\n", in[i] - '0');
        sum += in[i++] - '0';
    }
    printf("%d", sum);
}