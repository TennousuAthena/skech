#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
	double X, Y;
public:
	Shape(double x, double y) {
		X = x;
		Y = y;
	}
	
	virtual double area() = 0;
	virtual double perim() = 0;
};

class Square : public Shape {
private:
	double side;
public:
	Square(double x, double y, double s) : Shape(x, y) {
		side = s;
	}
	
	double area() {
		return pow(side, 2);
	}
	
	double perim() {
		return 4 * side;
	}
};

class Circle : public Shape {
private:
	double radius;
public:
	Circle(double x, double y, double r) : Shape(x, y) {
		radius = r;
	}
	
	double area() {
		return M_PI * pow(radius, 2);
	}
	
	double perim() {
		return 2 * M_PI * radius;
	}
};

class Triangle : public Shape {
private:
	double base, height;
public:
	Triangle(double x, double y, double b, double h) : Shape(x, y) {
		base = b;
		height = h;
	}
	
	double area() {
		return 0.5 * base * height;
	}
	
	double perim() {
		return 3 * base;
	}
};

void pm1(Shape* shape) {
	cout << "Area: " << shape->area() << endl;
	cout << "Perimeter: " << shape->perim() << endl;
}

void pm2(Shape& shape) {
	cout << "Area: " << shape.area() << endl;
	cout << "Perimeter: " << shape.perim() << endl;
}

int main() {
	Square square(0, 0, 5);
	Circle circle(0, 0, 3);
	Triangle triangle(0, 0, 4, 6);
	
	Shape* s1 = &square;
	Shape* s2 = &circle;
	Shape* s3 = &triangle;
	
	pm1(s1);
	pm1(s2);
	pm1(s3);
	
	pm2(*s1);
	pm2(*s2);
	pm2(*s3);
	
	return 0;
}

