#include<iostream>
using namespace std;

int main() {
    // pointer to pointer
    int a = 10;
    int* ptrA = &a;
    int** ptrB = &ptrA;

    // printing the memory address of a;
    cout << ptrA << endl;
    // printing the memory address of ptrA;
    cout << ptrB << endl;

    cout << *ptrB << endl;
    cout << **ptrB << endl;
    return 0;
}