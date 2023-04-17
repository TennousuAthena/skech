#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int a[27];
	char input[1001];
	memset(a, 0, sizeof(a));
	scanf("%s", input);
	for(int i=0; i<(int)strlen(input); i++){
		a[input[i] - 'a'] ++;
	}
	int maxi=0;
	for(int i=0; i<27; i++){
		if(a[maxi] < a[i]){
			maxi = i;
		}
	}
	printf("%c\n%d",maxi+'a', a[maxi]);
	return 0;
}
