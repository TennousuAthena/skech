#include <iostream>
using namespace std;

class Rectangle {
private:
	double x1, y1; // coordinates of lower left corner
	double x2, y2; // coordinates of upper right corner
	
public:
	Rectangle(double a, double b, double c, double d) {
		x1 = a;
		y1 = b;
		x2 = c;
		y2 = d;
	}
	
	double area() {
		return (x2 - x1) * (y2 - y1);
	}
	
	double perimeter() {
		return 2 * ((x2 - x1) + (y2 - y1));
	}
};

int main() {
	Rectangle myRect(0, 0, 4, 3);
	
	cout << "The area of the rectangle is " << myRect.area() << endl;
	cout << "The perimeter of the rectangle is " << myRect.perimeter() << endl;
	
	return 0;
}


