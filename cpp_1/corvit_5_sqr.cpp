#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    
    cout << "Enter number: ";
    cin >> num;

    cout << "Square of " << num << " is " << pow(num, 2) << endl;
    cout << "Cube is " << pow(num, 3) << endl;
    cout << "Double is " << num*2 << endl;

    return 0;
}