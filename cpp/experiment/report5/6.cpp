#include <iostream>
using namespace std;

bool even(int n) {
	return n % 2 == 0;
}

int main() {
	int n;
	while (true) {
		cout << "Enter an integer: ";
		cin >> n;
		if (even(n)) {
			cout << n << " is even." << endl;
		} else {
			cout << n << " is odd." << endl;
		}
	}
	return 0;
}

