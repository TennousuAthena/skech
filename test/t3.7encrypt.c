#include<stdio.h>
//opqrstuvwxyz
void trans(char *input){
    if ((*input >= 'A' && *input <= 'V') || *input >= 'a' && *input <= 'v'){
        *input = *input + 4;
    }else if((*input >= 'w' && *input <= 'z') || *input >= 'W' && *input <= 'Z'){
        *input = *input - 22;
    }
}

int main(){
    char str[101];
    scanf("%s", str);
    for (int i=0; i<=101; i++){
        trans(&str[i]);
    }
    printf("%s", str);
    return 0;
}