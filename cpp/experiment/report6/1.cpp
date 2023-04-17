#include<iostream>
using namespace std;
class Twofloats {
	float fa;
	float fb;
public:
	void setTwoValue(float a,float b);
	float add();
	float subtract();
	float multiply();
	float divide();
};

void Twofloats::setTwoValue(float a, float b){
	fa = a;
	fb = b;
}

float Twofloats::add() {
	return fa + fb;
}

float Twofloats::subtract() {
	return fa - fb;
}

float Twofloats::multiply() {
	return fa * fb;
}

float Twofloats::divide() {
	return fa / fb;
}

int main() {
	Twofloats tf;
	tf.setTwoValue(10, 5);
	cout << "Addition: " << tf.add() << endl;
	cout << "Subtraction: " << tf.subtract() << endl;
	cout << "Multiplication: " << tf.multiply() << endl;
	cout << "Division: " << tf.divide() << endl;
	
	tf.setTwoValue(10.5, 2.1);
	cout << "Addition: " << tf.add() << endl;
	cout << "Subtraction: " << tf.subtract() << endl;
	cout << "Multiplication: " << tf.multiply() << endl;
	cout << "Division: " << tf.divide() << endl;
	
	return 0;
}
