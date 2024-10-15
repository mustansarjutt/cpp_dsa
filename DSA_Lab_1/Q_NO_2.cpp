#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter the age: ";
    cin >> age;

    if (age < 12) {
        cout << "No discount rate" << endl;
    }
    else if (age < 24) {
        cout << "0.7 discount rate" << endl;
    }
    else {
        cout << "1.0 discount rate" << endl;
    }

    system("pause");
    return 0;
}