#include <iostream>
using namespace std;

void Calc(float firstNum, float secondNum, float* pSum, float* pDiff) {
	*pSum = firstNum + secondNum;
	*pDiff = firstNum - secondNum;
}

int main() {
	float a, b, sum, diff;
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	
	Calc(a, b, &sum, &diff);
	
	cout << "The sum of " << a << " and " << b << " is " << sum << endl;
	cout << "The difference of " << a << " and " << b << " is " << diff << endl;
	return 0;
}

