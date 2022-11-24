//选择排序
#include<stdio.h>

/**
* 变量交换
*/
void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int* arr, int numsSize){
    for (int i=0; i<numsSize-1; i++){
        int k=i;
        for(int j=i+1; j<=numsSize; j++)
            if(arr[j] > arr[k])
                k=j;
        swap(&arr[k], &arr[i]);
    }
}

int main(){
    int arr[]= {9, 8, 7, 6, 5, 4, 3, 2, 1};
    selection_sort(arr, 9);
    for (int i=0; i<=9; i++){
        printf("%d,", arr[i]);
    }
}