#include <iostream>
#include <string>

using namespace std;

struct Student 
{
    string nickname;
    string LineID;
    string phone;
    string ID;
};

int main() {
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter nickname: ";
	cin >> s1.nickname;
	cout << "Enter LineID: ";
	cin >> s1.LineID;
	cout << "Enter phone: ";
	cin >> s1.phone;
	cout << "Enter ID: ";
	cin >> s1.ID;

    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "Nickname: " << s1.nickname << endl;
	cout << "LineID: " << s1.LineID << endl;
	cout << "Phone: " << s1.phone << endl;
	cout << "ID: " << s1.ID << endl;

    return 0;
}

