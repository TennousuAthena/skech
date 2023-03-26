/*
  Write a function to calculate the area of a circle, 
  and its circumference is known to be c. This function should call another function that returns the radius r of the given circumference c. 
  The correlation formula is:r=c/2*pi and a=pi*r2
 */
#include<cstdio>

#define MATH_PI 3.14159

float get_radius_from_cicr(float cicr){
	return cicr / (2 * MATH_PI);
}
float get_area_from_radius(float radius){
	return MATH_PI * radius * radius;
}
int main(){
	printf("Please input the value of circumference: ");
	float c;
	scanf("%f", &c);
	printf("The area of the circle is: %f", get_area_from_radius(get_radius_from_cicr(c)));
}
