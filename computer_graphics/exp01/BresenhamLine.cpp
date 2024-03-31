#include <iostream> 
#include <graphics.h>

void BresenhamLine(int x1,int y1,int x2,int y2,COLORS color=RED){
	int dx = abs(x2-x1);
	int dy = abs(y2-y1);
	int p = 2 * dy - dx;
	int two_dy = 2 * dy;
	int two_dy_dx = 2 * (dy-dx);
	
	int x = x1, y = y1;
	
	putpixel(x1, y1, color);
	
	while(x < x2){
		x++;
		if(p<0){
			p+= two_dy;
		}else{
			y++;
			p+= two_dy_dx;
		}
		putpixel(x, y, color);
	}
}
int main()
{
	initgraph(800,800);      // 初始化
	BresenhamLine(200,160,400,200, WHITE);   // 画线
	getch();        
	closegraph();       
	return 0;
}
