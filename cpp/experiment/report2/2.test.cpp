#include <iostream>
#include <cmath>

using namespace std;

float getRadius(float c) {
	return c / (2 * M_PI);
}

float getArea(float c) {
	float r = getRadius(c);
	return M_PI * pow(r, 2);
}

int main() {
	float c = 10;  // circumference
	float r = getRadius(c);
	float a = getArea(c);
	cout << "Circumference: " << c << endl;
	cout << "Radius: " << r << endl;
	cout << "Area: " << a << endl;
	return 0;
}
