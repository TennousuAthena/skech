#include<iostream>
using namespace std;
class X{
public:
	X(int inq, int inp){
		p = inp;
		q = inq;
	}
	void show(){
		cout << "p=" << p << ",q=" << q << ",";
	}
protected:
	int p;
private:
	int q;
};
class Y : protected X{
public:
	Y(int inq, int inp, int ins) : X (inp, inq){
		s = ins;
	}
	void IncP (){
		p+=1;
	}
	void show(){
		X::show();
		cout << "s=" << s;
	}
private:
	int s;
};

int main(){
	X x = X(1, 2);
	x.show();
	cout << endl;
	Y y = Y(1, 2, 3);
	y.IncP();
	y.show();
}
