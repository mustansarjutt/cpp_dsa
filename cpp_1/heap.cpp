#include <iostream>
using namespace std;

int main() {
    // stack
    int a = 10;
    int* b = new int(25); // heap
    cout << "A = " << a << endl;
    cout << "B = " << *b << endl;
    delete(b); // deallocate memory
    // there p is the dangling pointer that pointing empty memory
    b = new int[5];
    delete[] b; // deallocating the memory for array
    b = NULL; // declairing null
    return 0;
}