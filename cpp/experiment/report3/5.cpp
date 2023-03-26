/**
 * 5、Design a function to count the number of times a certain digit repeats in any integer. 
 * For example: in 21252, if 2 appears 3 times, the function should return 3.
 *  Test the function in the main function.
 */
#include<iostream>

int cout_digits(int num, int digit){
	int count = 0;
	while(num >0){
		if(num % 10 == digit){
			count++;
		}
		num /=10;
	}
	return count;
}

int main(){
	std::cout << "Input number and target digit >";
	int num, dig;
	std::cin >> num >> dig;
	std::cout << cout_digits(num, dig) << " times";
}
