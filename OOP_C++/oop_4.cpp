#include <iostream>
using namespace std;

class Employee
{
    int id;
    // static data members
    static int count;
public:
    void setData(void) {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void showData() {
        cout << "Id = " << id << endl;
    }
    static void getCount() {
        cout << "The value of count = " << count << endl;
    }
    static double add(double a, double b) {
        return a+b;
    }
};
int Employee ::count = 0; // default value of static is zero

int main() {
    Employee e1, e2, e3;
    e1.setData();
    e1.showData();

    e2.setData();
    e2.showData();

    e3.setData();
    e3.showData();

    Employee::getCount();
    // e1, e2, e3 aare sharing same static variable
    cout << "Adding 89.4 and 87.9 = " << Employee ::add(89.4, 87.9) << endl;
    return 0;
}