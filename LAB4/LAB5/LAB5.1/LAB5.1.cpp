#include <iostream>
#include <string>

using namespace std;

int MaxOfThree(int A, int B, int C)
{
	if (A >= B && A >= C)
		return A;
	else if (B >= A && B >= C)
		return B;
	else
		return C;
}

int Min(int A, int B, int C)
{
	if (A <= B && A <= C)
		return A;
	else if (B <= A && B <= C)
		return B;
	else
		return C;
}

int main()
{
	int A, B, C;
	int Maxvalue = -10000;
	int MinValue = 10000;

	cout << "Enter A integers: ";
	cin >> A;
	cout << "Enter B Integers ";
	cin >> B;
	cout << "Enter C Integers ";
	cin >> C;
	Maxvalue = MaxOfThree(A, B, C);
	cout << "The maximum value is: " << Maxvalue << endl;
	MinValue = Min(A, B, C);
	cout << "Minimum: " << MinValue << endl;
	return 0;
}