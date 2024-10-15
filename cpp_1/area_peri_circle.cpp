#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius;
    float area, cirumference;

    cout << "Enter the radius of circle(m): ";
    cin >> radius;

    area = radius * radius * M_PI;

    cirumference = 2 * M_PI * radius;

    cout << "Area = " << area << "m^2" << endl
        << "Circumference = " << cirumference << "m" << endl;

    return 0;
}