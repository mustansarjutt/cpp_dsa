#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int y = a;
    a = b;
    b = y;
}

int main() {
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;

    swap(a, b);

    cout << "After swaping A and B " << a << " " << b << endl;

    return 0;
}