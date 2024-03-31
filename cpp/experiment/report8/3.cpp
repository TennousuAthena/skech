#include <iostream>

using namespace std;

class Object {
protected:
	double weight;
public:
	Object(double w) {
		weight = w;
		cout << "Object constructor called." << endl;
	}
	
	~Object() {
		cout << "Object destructor called." << endl;
	}
	
	void setWeight(double w) {
		weight = w;
	}
	
	double getWeight() {
		return weight;
	}
};

class Box : public Object {
private:
	double width;
public:
	Box(double w, double wd) : Object(w) {
		width = wd;
		cout << "Box constructor called." << endl;
	}
	
	~Box() {
		cout << "Box destructor called." << endl;
	}
	
	void setWidth(double wd) {
		width = wd;
	}
	
	double getWidth() {
		return width;
	}
};

int main() {
	Box myBox(10.0, 5.0);
	cout << "The weight of my box is: " << myBox.getWeight() << endl;
	cout << "The width of my box is: " << myBox.getWidth() << endl;
	
	return 0;
}

