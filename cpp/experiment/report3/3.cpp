/**
 * Define a function int fun (int a, int b, int c). Its function is: if a, b and c can form equilateral triangle, 
 * it will return 3; if it can form isosceles triangle, it will return 2; if it can form a general triangle function, 
 * it will return 1; if it cannot form a triangle, it will return 0. Test this function in the main function,
 *  input the three sides of a triangle, and output the judgment result.
 */
#include<iostream>

int fun (int a, int b, int c) {
	int max;
	if( a > b){
		if( a > c){
			max = a;
		}else{
			max = c; 
		}
	}else{
		if( b > c){
			max = b;
		}else{
			max = c;
		}
	}
	if(a + b + c - max <= max){
		return 0;
	}
	if( a== b && b == c){
		return 3;
	}
	if( a == b || b == c || a == c){
		return 2;
	}
	return 1;
}

int main(){
	std::cout << "Please input the three sides of a triangle:";
	int a, b, c;
	std::cin >> a >> b >> c;
	switch (fun(a, b, c)) {
	case 0:
		std::cout << "Cannot form a triangle";
		break;
	case 1:
		std::cout << "General triangle";
		break;
	case 2:
		std::cout << "Isosceles triangle";
		break;
	case 3:
		std::cout << "Equilateral triangle";
		break;
	}
}
