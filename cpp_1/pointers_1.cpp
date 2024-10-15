#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;

    cout << "Address = " << ptr << endl;
    cout << "Address inc = " << ++ptr << endl;
    // cout << "Address dec = " << --ptr << endl;
    // cout << "\n";

    int arr[] = {1, 2, 3};
    // arr is storing the address of 1st occurance
    // cout << arr << endl;
    int* ptrArray = arr;
    // printing the address of 1st occurance
    cout << ptrArray << endl;
    // printing the 1st occurance
    cout << *ptrArray << endl;
    
    cout << "Printing the elements of array using pointer!" << endl;
    for (int i=0; i<3; i++) {
        cout << *ptrArray << endl;
        ptrArray++;
    }
    for (int i=0; i<3; i++) {
        cout << *(arr+i) << endl;
    }
    return 0;
}