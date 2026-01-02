#include <iostream>

using namespace std;

int main()
{
    int X = 10;
	int* P = &X;
	
	cout << "Value Of X: " << X << endl;
	cout << "Address Of X: " << &X << endl;
	cout << "Address Of P: " << P << endl;
	cout << "Value P: " << *P << endl;
	return 0;
}
