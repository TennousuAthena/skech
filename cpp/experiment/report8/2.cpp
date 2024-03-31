#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
	double x, y;
public:
	Shape(double a, double b) {
		x = a;
		y = b;
	}
};

class Rectangle : public Shape {
private:
	double len, width;
public:
	Rectangle(double a, double b, double l, double w) : Shape(a, b) {
		len = l;
		width = w;
	}
	
	double getArea() {
		return len * width;
	}
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double a, double b, double r) : Shape(a, b) {
		radius = r;
	}
	
	double getArea() {
		return M_PI * pow(radius, 2);
	}
};

class Square : public Rectangle {
public:
	Square(double a, double b, double s) : Rectangle(a, b, s, s) {}
};

int main() {
	Rectangle r1(0, 0, 5, 10);
	cout << "Rectangle area: " << r1.getArea() << endl;
	
	Circle c1(0, 0, 3);
	cout << "Circle area: " << c1.getArea() << endl;
	
	Square s1(0, 0, 4);
	cout << "Square area: " << s1.getArea() << endl;
	
	return 0;
}

