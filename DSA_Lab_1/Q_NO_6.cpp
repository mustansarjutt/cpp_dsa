#include <iostream>
using namespace std;

int main() {
    int num, counter = 0;

    do {
        cout << "Enter the number: ";
        cin >> num;
        counter++;
    } while(num % 2 != 0);
    
    if (counter > 0) {
        cout << "Even number is at " << counter << " location" << endl;
    }
    else {
        cout << "There is no even number in the list" << endl;
    }

    system("pause");
    return 0;
}