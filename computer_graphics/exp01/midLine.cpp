#include <iostream> 
#include <graphics.h>

void midLine(int x1,int y1,int x2,int y2,COLORS color=RED){
	int a, b, d1, d2, d, x, y;
	a = y1 - y2;
	b = x2 - x1;
	d = 2 * a + b;
	d1 = 2*a; d2 = 2*(a+b);
	x = x1; y = y1;
	putpixel(x, y, color);
	while(x < x2){
		if(d<0){
			x++, y++, d += d2;
		}else{
			x++, d+=d1;
		}
		putpixel(x, y, color);
	}
}
int main()
{
	initgraph(800,800);       // 初始化
	midLine(200,160,400,400, BLUE);   // 画线
	getch();        
	closegraph();       
	return 0;
}
