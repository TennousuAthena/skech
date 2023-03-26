/**
 * Calculate and output all integer solutions of equation x^3+y^3=3383.
 */
#include<iostream>
#include<cmath>

int main(){
	int target = 3383;
	for(int x=0; x< target; x++){
		for(int y=0; y<target; y++){
			if(pow(x, 3)+pow(y, 3) == target){
				std::cout << "(x, y) = (" << x << "," << y << ")" << std::endl;
			}
		}
	}
}
