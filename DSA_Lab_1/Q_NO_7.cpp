#include <iostream>
using namespace std;

int main() {
    int base, power, result = 1;

    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    for (int i=0; i<power; i++) {
        result *= base;
    }

    cout << base << "^" << power << " = " << result << endl;

    system("pause");
    return 0;
}