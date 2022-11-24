/*
  
 */
#include<stdio.h>
#include<math.h>
int main(){
	double s=0;
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		s += pow(i, 2) / (float)(i+1);
	}
	printf("%.2lf", s);
}
