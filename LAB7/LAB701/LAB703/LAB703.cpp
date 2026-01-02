#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int* p = &a;
	cout << "Value Of a: " << a << endl;
	cout << "Address Of a: " << &a << endl;

	*p = 100;
	cout << "Value Of p: " << *p << endl;
	cout << "Address Of p: " << &p << endl;
	return 0;
}