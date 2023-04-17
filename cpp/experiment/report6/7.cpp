#include <iostream>
using namespace std;

class Point {
private:
	double x, y;
	
public:
	Point(double x_val, double y_val) {
		x = x_val;
		y = y_val;
	}
	
	void setX(double new_x) {
		x = new_x;
	}
	
	void setY(double new_y) {
		y = new_y;
	}
	
	double getX() const {
		return x;
	}
	
	double getY() const {
		return y;
	}
};

class Rectangle {
private:
	Point lower_left, upper_right;
	
public:
	Rectangle(Point ll, Point ur) : lower_left(ll), upper_right(ur) {}
	
	double area() const {
		double length = upper_right.getX() - lower_left.getX();
		double width = upper_right.getY() - lower_left.getY();
		return length * width;
	}
	
	double perimeter() const {
		double length = upper_right.getX() - lower_left.getX();
		double width = upper_right.getY() - lower_left.getY();
		return 2 * (length + width);
	}
};

int main() {
	Point p1(0, 0);
	Point p2(3, 4);
	
	Rectangle myRect(p1, p2);
	
	cout << "The area of the rectangle is " << myRect.area() << endl;
	cout << "The perimeter of the rectangle is " << myRect.perimeter() << endl;
	
	return 0;
}

