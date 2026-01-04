#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // TODO: (ถ้าต้องการเพิ่ม) เช่น postcode[6]
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
	Address ADDR;
	Phone TEL;
    // TODO:
}; 

void printStudent(Student s1,Address a1,Phone p1)
{
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Surname: " << s1.surname << endl;
    cout << "Address: " << a1.number << endl;
	cout << "Road: " << a1.road << endl;
	cout << "District: " << a1.district << endl;
    cout << "Province: " << a1.province << endl;
    cout << "Phone - Home: " << p1.home << endl;
	cout << "Phone - Mobile: " << p1.mobile << endl;
}

int main() {
    Student s1;

    // TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    // TODO 3) cin >> 
	cin >> s1.ADDR.number;
    cout << "Address - Road: ";
    // TODO 3) cin >> 
	cin >> s1.ADDR.road;
    cout << "Address - District: ";
    // TODO 3) cin >> 
	cin >> s1.ADDR.district;
    cout << "Address - Province:";
    // TODO 3) cin >>
    cin >> s1.ADDR.province;

    cout << "Phone - Home: ";
    // TODO 3) cin >> 
	cin >> s1.TEL.home;
    cout << "Phone - Mobile: ";
    // TODO 3) cin >>
	cin >> s1.TEL.mobile;

    cout << "\n===== Output =====\n";
    //// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	printStudent(s1, s1.ADDR, s1.TEL);
    return 0;
}
