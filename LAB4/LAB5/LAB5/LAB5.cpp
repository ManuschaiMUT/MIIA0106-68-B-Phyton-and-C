#include <iostream>
#include <string>

using namespace std;

double calculateArea(double radius)
{
	return 3.14 * radius * radius;
}

double rectArea(double width, double height)
{
	double result = width * height;
	return result;
}

int main()
{
	double radius;
	double result;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	result = calculateArea(radius);
	cout << "The area of the circle is: " << result << endl;

	double width, height;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter height: ";
	cin >> height;
	cout << "The area of the rectangle is: " << rectArea(width, height) << endl;

	return 0;
}