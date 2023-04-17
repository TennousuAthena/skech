#include <iostream>
using namespace std;

double min(double x, double y) {
	return x < y ? x : y;
}

void min(double x, double y, double &minValue) {
	minValue = x < y ? x : y;
}

int main() {
	double x = 3.2, y = 2.5;
	double min1 = min(x, y);
	double min2;
	min(x, y, min2);
	
	cout << "The smaller value of " << x << " and " << y << " is " << min1 << endl;
	cout << "The smaller value of " << x << " and " << y << " is " << min2 << endl;
	
	return 0;
}

