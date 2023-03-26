#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> d;  // 创建一个空的 deque
	
	// 在两端添加元素
	d.push_back(1);
	d.push_front(2);
	d.push_back(3);
	
	// 遍历元素
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;
	
	return 0;
}
