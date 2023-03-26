#include <iostream>
#include <deque>
#include <cstdio>

using namespace std;

int main(){
	deque<int> dq;
	int num;
	cin >> num;
	while(num-- >0){
		int opration, val, is_end;
		cin >> opration;
		switch (opration) {
		case 0:
			cin >> is_end >> val;
			is_end ? dq.push_back(val) : dq.push_front(val);
			break;
		case 1:
			cin >> val;
			cout << dq[val] << endl;
			break;
		case 2:
			cin >> is_end;
			is_end ? dq.pop_back() : dq.pop_front();
			break;
		default:
			break;
		}
	}
}
