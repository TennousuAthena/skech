#include <stdio.h>
void 进位(char** arr, int p){
    printf("%c", arr[p]);
    if(*arr[p] > '4' && *arr[p] < '9'){
        *arr[p] += 1;
        进位(arr, p -1);
    }else if(*arr[p] == '9'){
        *arr[p] = '0';
        进位(arr, p -1);
    }else if(*arr[p] == '.'){
        进位(arr, p -1);
    }else{
        return;
    }
}

int main(){
    char *in;
    unsigned int count = 0;
    unsigned int mark = 114514;
    while ((in[count++] = getchar()) != '\n'){
    }
    for (int i=count; i>0; i--){
        if (in[i] == '.'){
            mark = i;
            
            break;
        }
    }
    进位(&in, mark +3);

    for (int i=0; i<count; i++){
        printf("%c", in[i]);
        if (in[i] == '.'){
            mark = i;
        }
        if (i - mark == 2){
            break;
        }
    }
    return 0;
}