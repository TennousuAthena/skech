#include<stdio.h>

char trans(int a){
    char DICT[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    for(int i=0; i< sizeof(DICT); i++)
        if(DICT[i] == a)
            return DICT[i-1];
}

int main(){
    short int c;
    while((c = getchar()) != EOF){
        if(c!=0)
            putchar(trans(c));
    }
}