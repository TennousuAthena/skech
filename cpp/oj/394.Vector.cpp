#include <iostream>
#include <vector>
#include <cstdio>

int main(){
	std::vector<int> v;
	int num;
	std::cin >> num;
	while(num-- > 0){
		int opration, val;
		std::cin >> opration;
		switch (opration) {
			case 0:
				std::cin >> val;
				v.push_back(val);
				break;
			case 1:
				std::cin >> val;
				std::cout << v[val] << std::endl;
				break;
			case 2:
				v.pop_back();
				break;
			default:
				break;
		}
	}
}
