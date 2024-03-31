#include<stdlib.h>
#include<math.h>
#include<graphics.h>
void lineDDA(int x0, int y0, int xEnd, int yEnd, COLORS color=RED){
	int dx = xEnd - x0, dy = yEnd - y0;
	int steps, k;
	float xIncrement, yIncrement, x = x0,y = y0;
	if(fabs(dx) > fabs(dy))
		steps = fabs(dx);
	else 
		steps = fabs(dy);
	xIncrement = float(dx) / float(steps);
	yIncrement = float(dy) /float(steps);
	putpixel(int (x+0.5),int( y+0.5), color);
	for(k=0; k<steps; k++){
		x += xIncrement;
		y += yIncrement;
		putpixel(round(x),round(y), color);
	}
} 

int main(){
	initgraph(800,800);      // 初始化
	lineDDA(200,160,400,200, WHITE);   // 画线
	getch();        
	closegraph(); 
}
