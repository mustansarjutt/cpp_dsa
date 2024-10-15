#include<iostream>
using namespace std;

double add(double, double);

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Sum = " << add(a, b) << endl;
    system("pause");
    return 0;
}

double add(double a, double b) {
    return a+b;
}