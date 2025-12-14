#include <iostream>
#include <string>

using namespace std;

void swap(int X, int Y)
{
	int temp;
	temp = X;
	X = Y;
	Y = temp;
	cout << "After swapping, A = " << X << endl;
	cout << "After swapping, B = " << Y << endl;
}

void swapREF(int A, int B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
	cout << "After swapping, A = " << A << endl;
	cout << "After swapping, B = " << B << endl;
}

int main()
{
	int A, B;
	cout << "Enter A integers: ";
	cin >> A;
	cout << "Enter B Integers ";
	cin >> B;
	cout << "A = " << endl;
	cout << "B = " << endl;
	swapREF(A, B);
	cout << "Swap REF A: " << A << endl;
	cout << "Swap REF B: " << B << endl;

	return 0;
}