#include<iostream>
using namespace std;
class Rectangle{
private:
	float len, wid;
public:
	
	void set(float length, float width){
		len = length;
		wid = width;
	}
	float getLen(){
		return len;
	}
	float getWid(){
		return wid;
	}
	float area() const{
		return len * wid;
	};
	float perim() const{
		return 2.0 * (len + wid);
	}
};

int main(){
	Rectangle rec1;
	rec1.set(6, 8);
	
	cout << "Length: " << rec1.getLen() << endl;
	cout << "Width: " << rec1.getWid() << endl;
	
	cout << "Area: " << rec1.area() << endl; 
	cout << "Perimeter: " << rec1.perim() << endl;
	
}
