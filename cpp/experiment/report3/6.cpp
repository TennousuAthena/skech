/**
 * Write a function void delete (int a [], int n, int i), where a is an array, n is the number of elements in a, 
 * and i is the subscript of an element in a. This function removes the i-th element in array a,
 *  and the elements after i position move forward one bit in turn, keeping the sequence of the remaining elements unchanged
 */
#include<iostream>

using namespace std;

void _delete(int a [], int n, int i){
	for(; i<n; i++){
		a[i] = a[i+1];
	}
}

int main(){
	int s[] = {1, 2 ,3 ,4 ,5 ,6};
	_delete(s, 6, 3);
	for(int i=0; i<6; i++){
		cout << s[i] << ' ';
	}
	
}
