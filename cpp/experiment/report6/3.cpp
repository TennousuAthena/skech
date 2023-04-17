#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
	
public:
	Circle(double r) {
		radius = r;
	}
	
	void setRadius(double r) {
		radius = r;
	}
	
	double getRadius() {
		return radius;
	}
	
	double perim() {
		return 2 * 3.14159 * radius;
	}
	
	double area() {
		return 3.14159 * radius * radius;
	}
};

int main() {
	Circle c1(5.0);
	Circle c2(10.0);
	
	cout << "Circle c1: radius=" << c1.getRadius() << ", perimeter=" << c1.perim() << ", area=" << c1.area() << endl;
	
	cout << "Circle c2: radius=" << c2.getRadius() << ", perimeter=" << c2.perim() << ", area=" << c2.area() << endl;
	
	c1.setRadius(7.0);
	cout << "Circle c1 after setting radius to 7.0: radius=" << c1.getRadius() << ", perimeter=" << c1.perim() << ", area=" << c1.area() << endl;
	
	c2.setRadius(15.0);
	cout << "Circle c2 after setting radius to 15.0: radius=" << c2.getRadius() << ", perimeter=" << c2.perim() << ", area=" << c2.area() << endl;
	
	return 0;
}

