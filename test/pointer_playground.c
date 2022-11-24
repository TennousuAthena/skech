#include <stdio.h>
void increase(int* num){
    *num = *num + 1;
}

int main(void){
    int test = 1;
    increase(&test);
    printf("%d", test);
}