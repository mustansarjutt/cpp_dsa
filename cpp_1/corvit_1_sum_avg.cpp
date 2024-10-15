#include <iostream>
using namespace std;

int main() {
    int counter = 0, num, sum = 0;
    float avg;

    for (int i=0; i<5; i++) {
        counter++;
        cout << "Enter " << i+1 << " number: ";
        cin >> num;
        sum += num;
    }

    avg = float(sum)/counter;

    cout << "The sum = " << sum << endl;
    cout << "The average is = " << avg << endl;

    return 0;
}