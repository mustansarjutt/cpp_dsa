#include <iostream>
using namespace std;

int main() {
    int a = 5;
    long x = 10;
    long long b =10;
    int *ptr = &a;

    cout << ptr << " " << *ptr << endl;
    cout << sizeof(int*) << " " << sizeof(char*) << endl;
    cout << sizeof(double*) << " " << sizeof(long*) << endl;

    cout << sizeof(a) << " " << sizeof(x) << " " << sizeof(b) << endl;
    
    return 0;
}