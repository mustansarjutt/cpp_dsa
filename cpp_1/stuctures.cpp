#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
    int rollNo;
    char grade;

    void setAttr(string name, int rollNo, int marks, char grade) {
        this->name = name;
        this->rollNo = rollNo;
        this->marks = marks;
        this->grade = grade;
    }
    void print() {
        cout << "Name = " << this->name << endl;
        cout << "Roll Number = " << this->rollNo << endl;
        cout << "Marks = " << this->marks << endl;
        cout << "Grade = " << this->grade << endl;
    }
    void inputDetail() {
        cout << "Enter the name of Student: ";
        getline(cin, name);
        cout << "Enter the roll number: ";
        cin >> this->rollNo;
        cout << "Enter the marks: ";
        cin >> this->marks;
        cout << "Enter the grade: ";
        cin >> this->grade;
    }
};

int main() {
    Student s1, s2;
    s1.inputDetail();
    s1.print();
    cout << "\n";
    cout << "------------------------";
    cout << "\n";
    s2.setAttr("Asim", 1075, 705, 'B');
    s2.print();
    return 0;
}