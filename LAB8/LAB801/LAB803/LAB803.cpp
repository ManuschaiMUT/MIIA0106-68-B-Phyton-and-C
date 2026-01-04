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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1)
{
    cout << "Nicname: " << s1.nickname << endl;
	cout << "LineID: " << s1.LineID << endl;
	cout << "Phone: " << s1.phone << endl;
	cout << "ID: " << s1.ID << endl;
}

int main() {
    Student s1;

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

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

    return 0;
}
