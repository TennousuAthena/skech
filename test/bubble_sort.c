#include<stdio.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bubble_sort(int* arr, int numsSize){
    for (int i=0; i<numsSize; i++)
        for(int j=0; j<numsSize-i; j++)
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

int main(){
    int arr[]= {9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubble_sort(arr, 9);
    for (int i=0; i<=9; i++){
        printf("%d,", arr[i]);
    }
}