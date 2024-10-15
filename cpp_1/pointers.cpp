#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr;
    ptr = &a;
    cout << "Address of a = " << ptr << "\n";
    cout << "Address of a = " << &a << "\n";

    // deferencing the pointer
    cout << "Value = " << *ptr << endl;

    // we can update the value by using pointers
    cout << "Before updating a = " << a << endl;
    *ptr = 20;
    cout << "After updating a = " << a << endl;
    return 0;
}