#include<iostream>
using namespace std;
class Cat{
private:
	int ID;
	static int numOfCats;
public:
	Cat(int num){
		ID = num;
		numOfCats++;
	};
	Cat(const Cat& c){
		ID = c.ID;
		numOfCats++;
	}
	static int getNumOfCats(){ return numOfCats; };
	void PrintMe(){ 
		cout << "Cat Num:" << ID << ", Total num of cats: " << numOfCats << endl;
	}
};
int Cat::numOfCats = 0;
int main(){
	Cat chocola(1001);
	chocola.PrintMe();
	Cat vanilla(1002);
	vanilla.PrintMe();
}
