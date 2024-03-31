#include <iostream>
#include <graphics.h>

#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

class Point {
public:
	double x;
	double y;
	
	Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}
};

struct Range {
	float left;
	float bottom;
	float right;
	float top;
};

int clipEncode(Point point, Range range) {
	int code = 0;
	if (point.x < range.left) code |= LEFT;
	if (point.x > range.right) code |= RIGHT;
	if (point.y < range.bottom) code |= BOTTOM;
	if (point.y > range.top) code |= TOP;
	return code;
}

void LineClip(Point p1, Point p2, Range range) {
	setcolor(GREEN);
	int codeP1 = clipEncode(p1, range);
	int codeP2 = clipEncode(p2, range);
	
	while (true) {
		if (!(codeP1 | codeP2)) {
			line(p1.x, p1.y, p2.x, p2.y);
			return;
		}
		if (codeP1 & codeP2) return;
		
		int codeOut = codeP1 ? codeP1 : codeP2;
		double x, y;
		
		if (codeOut & TOP) {
			x = p1.x + (p2.x - p1.x) * (range.top - p1.y) / (p2.y - p1.y);
			y = range.top;
		} else if (codeOut & BOTTOM) {
			x = p1.x + (p2.x - p1.x) * (range.bottom - p1.y) / (p2.y - p1.y);
			y = range.bottom;
		} else if (codeOut & RIGHT) {
			y = p1.y + (p2.y - p1.y) * (range.right - p1.x) / (p2.x - p1.x);
			x = range.right;
		} else if (codeOut & LEFT) {
			y = p1.y + (p2.y - p1.y) * (range.left - p1.x) / (p2.x - p1.x);
			x = range.left;
		}
		
		if (codeOut == codeP1) {
			p1.x = x;
			p1.y = y;
			codeP1 = clipEncode(p1, range);
		} else {
			p2.x = x;
			p2.y = y;
			codeP2 = clipEncode(p2, range);
		}
	}
}

int main() {
	Point p1 = Point(100, 100);
	Point p2 = Point(600, 300);
	Range myRange = Range{
		180, 150, 480, 270
	};
	
	initgraph(640, 480);
	
	setcolor(RED);
	line(p1.x, p1.y, p2.x, p2.y);
	setcolor(WHITE);
	rectangle(myRange.left, myRange.bottom, myRange.right, myRange.top);
	LineClip(p1, p2, myRange);
	
	getch();
	closegraph();
	
	return 0;
}

