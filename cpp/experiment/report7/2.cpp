#include<iostream>
using namespace std;

class Car;
class Boat{
private:
	int weight;
public:
	Boat(int w) {weight = w;};
	friend int getTotalWeight(const Boat& b, const Car& c);
};

class Car{
private:
	int weight;
public:
	Car(int w) {weight = w;};
	friend int getTotalWeight(const Boat& b, const Car& c);
};
int getTotalWeight(const Boat& b, const Car& c){
	return b.weight + c.weight;
}

int main(){
	Boat waveBoat(114);
	Car meg(514);
	
	cout << "The total weight is "<< getTotalWeight(waveBoat, meg) << endl;
}
