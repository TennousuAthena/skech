#include<stdio.h>
int main(){
	int count =0;
	for(int x = 1; x<=5; x++){
		for(int i=0; i<=5; i++){
			if(x != i && (x*10 + i) %2 == 1 && (x*10 + i) %7 == 0){
				printf("%d ", x*10 + i);
				count++;
			}
		}
	}
	printf("\n%d", count);
}
