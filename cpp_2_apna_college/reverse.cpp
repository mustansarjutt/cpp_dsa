#include <iostream>
using namespace std;

int main() {
    int num, cNum;
    cout << "Enter the number: ";
    cin >> num;
    cNum = num;
    int reverse = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        reverse = reverse*10 + lastDigit;
        num /= 10;
    }
    cout << "Reverse of " << cNum << " is " << reverse << endl;
    return 0;
}