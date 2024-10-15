#include <iostream>
using namespace std;

void table(int, int);

int main() {
    int num, length;

    cout << "Enter any positive number: ";
    cin >> num;

    if (num > 0) {
        cout << "Enter the lenght of table: ";
        cin >> length;

        table(num, length);
    }
    else {
        cout << "Your entered number is zero or negative" << endl;
    }
    
    system("pause");
    return 0;
}

void table(int num, int lenght) {
    for (int i=1; i<=lenght; i++) {
        cout << num << " X " << i << " = " << (num*i) << endl;
    }
}