#include <iostream>
using namespace std;
class Math {
public:
    static double sum(double a, double b) {
        return a+b;
    }
    static void table(int num , int start, int end) {
        for (int i=start; i<=end; i++) {
            cout << num << " X " << i << " = " << (num*i) << endl;
        }
    }
}; 

int main() {
    int num, start, end;
    cout << "Enter the number to print the table: ";
    cin >> num;
    cout << "Enter the start point: ";
    cin >> start;
    cout << "Enter the end point: ";
    cin >> end;
    Math::table(num, start, end);
    return 0;
}