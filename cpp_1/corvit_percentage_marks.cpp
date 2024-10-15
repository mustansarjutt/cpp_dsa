#include <iostream>
using namespace std;

int main() {
    int totalMarks, obtainMarks;
    float percentage;

    cout << "Enter obtained marks: ";
    cin >> obtainMarks;
    cout << "Enter total marks: ";
    cin >> totalMarks;

    percentage = (obtainMarks*100)/float(totalMarks);

    cout << "Percentage is: " << percentage << endl;

    return 0;
}