#include <iostream>
#include <string>

using namespace std;

struct Student{
    string nickname;
    string LineID;
    string phone;
    string ID;
};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b)
{
    Student temp = a;
    a = b;
	b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (students[j].ID > students[j + 1].ID)
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        // TODO: cout << students[i]...
		cout << "Student " << (i + 1) << ":\n";
		cout << "Nickname: " << students[i].nickname << endl;
		cout << "LineID: " << students[i].LineID << endl;
		cout << "Phone: " << students[i].phone << endl;
		cout << "ID: " << students[i].ID << endl;
        cout << "----------------------\n";
    }
}

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "Enter Nickname: ";
		cin >> students[i].nickname;
		cout << "Enter LineID: ";
		cin >> students[i].LineID;
		cout << "Enter Phone: ";
		cin >> students[i].phone;
		cout << "Enter ID: ";
		cin >> students[i].ID;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}

