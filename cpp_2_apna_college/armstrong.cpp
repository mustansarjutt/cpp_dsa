#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int cNum = num; // copying num
    int sum = 0;
    // 153 = (1*1*1) + (5*5*5) + (3*3*3)
    while(num > 0){
        int lastDigit = num % 10; // taking last num
        sum += pow(lastDigit, 3); // taking cube of that num
        num = num / 10; // removing num
    }

    if (sum == cNum) {
        cout << "Armstron number" << endl;
    }
    else {
        cout << "Not armstrong" << endl;
    }

    return 0;
}