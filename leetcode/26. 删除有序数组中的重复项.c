#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
	int j=0, i=0;
	while(i<numsSize){
		if(nums[i] != nums[j]){
			nums[++j] = nums[i];
		}else{
			i++;
		}
	}
	return j+1;
}

int main(){
	int nums[] = {0,0,1,1,1,2,2,3,3,4};
	
	printf("%d", removeDuplicates(nums, sizeof(nums)/sizeof(int)));
}
