/**
 * 4、Define a function: given m, output a prime number greater than m and following m. 
 * In the main function, input m, then output results.
 */
#include<iostream>
#include<cmath>

int greater_prime(int m){
	while(1){
		m++;
		int sign = 0;
		for(int i=2; i<=sqrt(m); i++){
			if(m % i == 0){
				sign++;
				break;
			}
		}
		if(!sign){
			return m;
		}
	}
}

int main(){
	std::cout << "Input m:";
	int m;
	std::cin >> m;
	std::cout << "The number is " << greater_prime(m);
}
