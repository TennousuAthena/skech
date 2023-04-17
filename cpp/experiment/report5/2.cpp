#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "N\t10*N\t100*N\t1000*N" << endl;
	
	for(n=1;n<=5;n++){
		cout << n << "\t"<< 10*n << "\t" << 100*n << "\t" << 1000*n<<endl;
	}
	
	return 0;
}

