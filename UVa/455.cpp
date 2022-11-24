#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        for(int i = 1; ; ++i)
            if(s.length() % i == 0 && s.substr(i) + s.substr(0, i) == s) {
            	cout << i << endl;
            	break;
            }
        if(n) cout << endl;
    }
    return 0;
}