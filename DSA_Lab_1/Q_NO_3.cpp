#include <iostream>
using namespace std;

int main() {
    int numeric;
    char letter;

    cout << "Enter the numeric grade out of 100: ";
    cin >> numeric;

    if (numeric >= 90 && numeric <= 100) {
        letter = 'A';
    } else if (numeric >= 80 && numeric < 90) {
        letter = 'B';
    } else if (numeric >= 70 && numeric < 80) {
        letter = 'C';
    } else if (numeric >= 60 && numeric < 70) {
        letter = 'D';
    } else if (numeric >= 50 && numeric < 60) {
        letter = 'E';
    } else if(numeric < 50 && numeric >= 0) {
        letter = 'F';
    }

    if (numeric >= 0 && numeric <= 100) {
        cout << numeric << " is equivalent to " << letter << " letter Grade" << endl;
    }
    else {
        cout << "Your entered Grade is more than 100" << endl;
    }

    system("pause");
    return 0;
}