#include <math.h>
#include <iostream>
using namespace std;

// Add functions implementation here
int GetInputFromTheUser ( float * pointer)
{
	int size;
	cout << "Enter the number of entries : ";
	cin >> size;
	for (int i=0; i<size; i++)
	{
		cout << "Enter element at " << i << "th index : ";
		cin >> * (pointer + i);
	}
	return size;
}
void DisplayArray ( float * pointer, int size)
{
	cout << "Array elements are : [";
	for (int i=0; i<size; i++)
	{
		cout <<  * (pointer + i) << ",";
	} 
	cout << "]";
}
int searchNumber (float num, float * pointer, int size)
{
	for (int i=0; i<size; i++)
	{
		if (num == pointer[i])
		{
			return i;
		}
	}
	return -1;
}