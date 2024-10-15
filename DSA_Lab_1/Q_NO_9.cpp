#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;

    do {
        cout << "Enter the number untill you want enter 0 to stop entering: ";
        cin >> number;
        if (number > 0) {
            double squareRoot = sqrt(number);
            cout << "Square root = " << squareRoot << endl;
        }
    } while (number > 0);

    return 0;
}