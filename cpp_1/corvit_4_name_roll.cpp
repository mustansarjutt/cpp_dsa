#include <iostream>
using namespace std;

int main() {
    string name, yourClass;
    int rollNo;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your roll no: ";
    cin >> rollNo;
    cin.ignore(); // ignore newline char

    cout << "Enter your class: ";
    getline(cin, yourClass);


    cout << "Your name is " << name << "\nYour roll no is " << rollNo << "\nYour class is " << yourClass << endl;
    return 0;
}