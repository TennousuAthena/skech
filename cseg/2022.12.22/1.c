#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d.%d.%d.%d",&a,&b,&c,&d);
	if((0<=a&&a<=255)&&(0<=b&&b<=255)&&(0<=c&&c<=255)&&(0<=d&&d<=255))
		printf("有效");
	else
		printf("无效");
}
