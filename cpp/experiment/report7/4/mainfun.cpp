//cmake mainfun.cpp
#include<iostream>
#include"Rectangle.h"
using namespace std;

int main(){
	Rectangle rec1;
	rec1.set(6, 8);
	
	cout << "Length: " << rec1.getLen() << endl;
	cout << "Width: " << rec1.getWid() << endl;
	
	cout << "Area: " << rec1.area() << endl; 
	cout << "Perimeter: " << rec1.perim() << endl;
	
}
