#include<stdio.h>
int fun(char a[])


{





	int i=0,j=0;


	while(a[i++]);


	for(;i<10;i++)


        a[i]='-';


}


main()


{


	char s[][10]={"English","math","physical","Chinese"};


	fun(s[0]);


	printf("%s",s[0]);


}

