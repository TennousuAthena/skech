/*
  7. 实验8-3：求重复次数最多的数
  输入数组int a[12]的元素，输出数组中重复次数最多的数。
  
  输出格式：num: %d, times=%d
  
  【样例输入】
  
  6 6 3 4 6 3 4 6 7 1 1 5
  
  【样例输出】
  
  num: 6, times=4
  

 */
#include<stdio.h>
#include<string.h>

int main(){
	int bucket[100];
	memset(bucket,0,sizeof(bucket));
	int n, max;
	for(int i=0; i<12; i++){
		scanf("%d", &n);
		bucket[n]++;
	}
	for(int i=0;i<100; i++){
		if(max < bucket[i]){
			max = i;
		}
	}
	printf("num: %d, times=%d", max, bucket[max]);
}
