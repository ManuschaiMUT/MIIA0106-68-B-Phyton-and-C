#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 10, 20, 30, 40 };
    int* p = arr;

    for (int i = 0; i < 4; i++)
    {
        cout << "Value at Arr[" << i << "] :" << *(p + i) << endl;
    }

	return 0;
}