#include<bits/stdc++.h>
using namespace std;

float convert_temperature(float temf){
	return 5.0 / 9.0 * (temf-32);
}

int main(){
	cout << "Input F> ";
	float f;
	cin >> f;
	cout << "Temperatue in C° is " << convert_temperature(f);
}
