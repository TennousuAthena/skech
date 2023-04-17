//nocompile Rectangle.cpp
#include "Rectangle.h"
void Rectangle::set(float length, float width){
	len = length;
	wid = width;
}
float Rectangle::getLen(){
	return len;
}
float Rectangle::getWid(){
	return wid;
}
float Rectangle::area() const{
	return len * wid;
}
float Rectangle::perim() const{
	return 2.0 * (len + wid);
}
