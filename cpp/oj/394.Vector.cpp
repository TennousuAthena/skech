#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(){
	vector<int> v;
	int num;
	cin >> num;
	while(num-- >0){
		int opration, val;
		cin >> opration;
		switch (opration) {
			case 0:
				cin >> val;
				v.push_back(val);
				break;
			case 1:
				cin >> val;
				cout << v[val] << endl;
				break;
			case 2:
				v.pop_back();
				break;
			default:
				break;
		}
	}
}
