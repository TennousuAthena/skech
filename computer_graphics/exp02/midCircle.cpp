#include <iostream> 
#include <graphics.h>

void midCircle(int x0, int y0, int R, COLORS color=RED){
	int x=0, y=R;
	double d = 1.25 - R;
	while(x < y){
		if( d < 0)
			d = d+ 2*x +3;
		else y--, d = d + 2 * x - 2 * y + 5;
		x++;
		
		putpixel(x+x0, y+y0, color);
		putpixel(-x+x0, y+y0, color);
		putpixel(x+x0, -y+y0, color);
		putpixel(-x+x0, -y+y0, color);
		putpixel(y+y0, x+x0, color);
		putpixel(y+y0, -x+x0, color);
		putpixel(-y+y0, x+x0, color);
		putpixel(-y+y0, -x+x0, color);
	}
}
int main()
{
	initgraph(800,800);       // 初始化
	midCircle(400, 400, 200, WHITE);   // 画圆
	getch();        
	closegraph();       
	return 0;
}
