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
    const int SIZE = 5;
    Student students[SIZE]; // Array ??? struct

    // INPUT
    for (int i = 0; i < SIZE; i++) 
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter Nickname: ";
		cin >> students[i].nickname;
		cout << "Enter LineID: ";
		cin >> students[i].LineID;
		cout << "Enter Phone: ";
		cin >> students[i].phone;
		cout << "Enter ID: ";
		cin >> students[i].ID;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << ":\n";
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "LineID: " << students[i].LineID << endl;
		cout << "Phone: " << students[i].phone << endl;
		cout << "ID: " << students[i].ID << endl;
        cout << "----------------------\n";
    }

    return 0;
}
