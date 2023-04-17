#include <iostream>
using namespace std;

class Rectangle {
private:
	double length;
	double width;
	
public:
	Rectangle(double l, double w) {
		length = l;
		width = w;
	}
	
	double area() {
		return length * width;
	}
	
	double perimeter() {
		return 2 * (length + width);
	}
};

int main() {
	Rectangle myRect(4, 3);
	
	cout << "The area of the rectangle is " << myRect.area() << endl;
	cout << "The perimeter of the rectangle is " << myRect.perimeter() << endl;
	
	return 0;
}

