#include <iostream>
using namespace std;

int main() {
    int smallest, num, number;

    cout << "Enter the number of numbers you want to enter: ";
    cin >> number;

    cout << "Enter the 1 number: ";
    cin >> num;

    smallest = num;

    for (int i=1; i<number; i++) {
        cout << "Enter the " << i+1 << " number: ";
        cin >> num;
        if (num < smallest) {
            smallest = num;
        }
    }

    cout << "Smallest number is: " << smallest << endl;

    system("pause");
    return 0;
}