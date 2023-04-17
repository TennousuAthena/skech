#include <iostream>
using namespace std;

inline double rectArea(double length, double width) {
	return length * width;
}

int main() {
	double length, width;
	
	cout << "Enter the length of the rectangle: ";
	cin >> length;
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	
	double area = rectArea(length, width);
	
	cout << "The area of the rectangle is " << area << endl;
	
	return 0;
}

