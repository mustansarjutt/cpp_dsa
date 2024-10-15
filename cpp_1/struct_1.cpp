#include<iostream>
using namespace std;
struct Student {
    int rollNo;
    int marks;
    float average;
    char grade;
};
int main() {
    Animal n;
    n.name = "Deer";
    n.legs = 4;

    Student s1;
    s1.rollNo = 1071;
    s1.average = 87.9;
    s1.grade = 'A';
    s1.marks = 959;
    return 0;
}
struct Animal {
    string name;
    int legs;
};