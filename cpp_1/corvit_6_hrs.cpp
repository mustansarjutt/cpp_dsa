#include <iostream>
using namespace std;

int main() {
    int hours;
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Mins = " << hours*60 << endl;
    cout << "Secs = " << hours*3600 << endl;
    return 0;
}