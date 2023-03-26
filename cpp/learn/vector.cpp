#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;  // 创建一个空的 vector
	
	// 添加元素
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	// 遍历元素
	for (int i = 0; i < int(v.size()); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	
	return 0;
}

