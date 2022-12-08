#include <stdio.h>
#include <string.h>
//enum coordinate_x {a, b, c, d, e, f, g, h};

int squareIsWhite(char * coordinates){
	char x, y;
	sscanf(coordinates, "\"%c%c\"", &x, &y);
	x = x - 'a' +1;
	y = y - '0';
//	printf("%d\n%d", x, y);
	if((x%2 ==0 && y%2 ==0)||(x%2 ==1 && y%2 ==1)){
		return 0;
	}else{
		return 1;
	}
	
}

int main(){
	char str[100];
	int i=0;
	while((str[i++] = getchar())!='\n'){
		
	}
	printf("\n%d", squareIsWhite(str));
}
