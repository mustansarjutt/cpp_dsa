#include <iostream>
using namespace std;

int main() {
    int num, div;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the divisor: ";
    cin >> div;

    cout << "Quotient is " << num/div << endl;
    cout << "reminder is " << num%div << endl;
    return 0;
}