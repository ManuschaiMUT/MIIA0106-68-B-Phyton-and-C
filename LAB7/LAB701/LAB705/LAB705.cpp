#include <iostream>

using namespace std;

void swapValue(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x = 5, y = 10;
	cout << "Before Swap X : " << x << endl;
	cout << "Before Swap Y : " << y << endl;

	swapValue(&x, &y);
	cout << "After Swap X : " << x << endl;
	cout << "After Swap Y : " << y << endl;

	return 0;

}