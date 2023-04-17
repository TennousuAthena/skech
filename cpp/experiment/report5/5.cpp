#include <iostream>
using namespace std;

int gcd(int a, int b) {
	// 辗转相除法求最大公约数
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void LCM(int a, int b, int& lcm) {
	lcm = a * b / gcd(a, b);
}

int main() {
	int a, b, lcm;
	cout << "Enter the first integer: ";
	cin >> a;
	cout << "Enter the second integer: ";
	cin >> b;
	
	LCM(a, b, lcm);
	
	cout << "The LCM of " << a << " and " << b << " is " << lcm << endl;
	return 0;
}

