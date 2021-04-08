#include <iostream>
#include "Functions.h"
using namespace std;
int main() {
	int x;
	int size=0;
	float num;
	float * ptr = new float;
	size = GetInputFromTheUser(ptr);
	DisplayArray ( ptr, size);
	cout << endl << "Enter the searching number : ";
	cin >> num;
	x = searchNumber (num, ptr, size);
	cout << "Searched number is on " << x << "th index";
}
