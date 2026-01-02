#include <iostream>

using namespace std;

int main()
{
	int score = 50;
	int* ptr = &score;

	cout << "Value Of Score : " << score << endl;
	cout << "Address Of Score : " << &score << endl;
	cout << "Value Of PTR : " << ptr << endl;

	return 0;
}