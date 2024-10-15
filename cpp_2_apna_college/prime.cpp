#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool flag = false;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=2; i<=sqrt(n); i++) { // we can also write n = sqrt(n)
        if (n%i == 0) {
            cout << "Non-prime" << endl;
            flag = true;
            break;
        }
    }
    
    if (flag == false) {
        cout << n << " is a prime number" << endl;
    }
    return 0;
}