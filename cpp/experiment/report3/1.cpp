/**
 * Find all three digit positive integers that can be divisible by 3 and have at least one digit of 5,
 * and print out all such integers and number.
 */

#include<iostream>
int main(){
	int count=0;
	for(int i=100; i<=999; i++){
		if(i % 3 ==0 && ((i  / 100 == 5) || (i /10 % 10 == 5) || (i % 100 == 5))){
			std::cout << i << ' ';
			count ++;
		}
	}
	std::cout << std::endl << "Count = " << count;
}
