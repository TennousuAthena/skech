#include<stdio.h>

char trans(char a){
    char DICT[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    for(int i=0; i< sizeof(DICT); i++)
        if(DICT[i] == a)
            return DICT[i-1];
}

int main(){
    char in[10000];
    scanf("%s", in);
    for(int i=0; in[i]!= '\0'; i++){
        putchar(trans(in[i]));
    }
}