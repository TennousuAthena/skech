#include <iostream> 
#include <graphics.h>
#include <vector>

using std::vector, std::cout, std::endl;

class Point {
public:
	double x;
	double y;
	
	Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}
	friend std::ostream& operator<<(std::ostream& os, const Point& point) {
		os << "Point(" << point.x << ", " << point.y << ")";
		return os;
	}
};

void seedFill(Point p0, COLORS colorInner=GREEN){
	vector<Point> colorStack;
	colorStack.push_back(p0);
	long unsigned int initColor = getpixel(p0.x, p0.y);
	while(!colorStack.empty()){
		Point thisPoint = colorStack.back();
		colorStack.pop_back();
		
		if(getpixel(thisPoint.x+1, thisPoint.y) == initColor){
			colorStack.push_back(Point(thisPoint.x+1, thisPoint.y));
		}
		if(getpixel(thisPoint.x-1, thisPoint.y) == initColor){
			colorStack.push_back(Point(thisPoint.x-1, thisPoint.y));
		}
		if(getpixel(thisPoint.x, thisPoint.y+1) == initColor){
			colorStack.push_back(Point(thisPoint.x, thisPoint.y+1));
		}
		if(getpixel(thisPoint.x, thisPoint.y-1) == initColor){
			colorStack.push_back(Point(thisPoint.x, thisPoint.y-1));
		}
		
		if(getpixel(thisPoint.x, thisPoint.y) == initColor){
			putpixel(thisPoint.x, thisPoint.y, colorInner);
//			Sleep(1);
//			cout << thisPoint << endl;
		}
	}
}


int main()
{
	initgraph(640,480);
	
	setcolor(WHITE); 
	circle(200, 200, 100);
	
	seedFill(Point(200,200), GREEN);
	
	getch();
	closegraph();       
	return 0;
}
