#include <iostream>
using namespace std;

class Tree {
private:
	int age;
	
public:
	Tree(int a) {
		age = a;
	}
	
	void grow(int years) {
		age += years;
	}
	
	void displayAge() {
		cout << "The tree's age is " << age << " year(s)." << endl;
	}
};

int main() {
	Tree myTree(10);
	
	myTree.displayAge();
	myTree.grow(5);
	myTree.displayAge();
	
	return 0;
}

