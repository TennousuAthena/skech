#include <iostream>

using namespace std;

class Animal {
public:
	virtual void sound() = 0;
};

class Bird : public Animal {
public:
	void sound() {
		cout << "tweet" << endl;
	}
};

class Dog : public Animal {
public:
	void sound() {
		cout << "woof" << endl;
	}
};

int main() {
	Animal* animal1 = new Bird();
	Animal* animal2 = new Dog();
	
	animal1->sound(); // output: tweet
	animal2->sound(); // output: woof
	
	delete animal1;
	delete animal2;
	
	return 0;
}

