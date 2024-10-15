#include <iostream>
using namespace std;

int main() {
    int num, numbers, counter = 0, sum = 0;
    float avg;

    cout << "Enter the numbers of number: ";
    cin >> numbers;

    for (int i=0; i<numbers; i++) {
        cout << "Enter the " << i+1 << " number: ";
        cin >> num;
        sum += num;
        counter++;
    }

    avg = float(sum) / counter;

    cout << "Average is: " << avg << endl;

    system("pause");
    return 0;
}