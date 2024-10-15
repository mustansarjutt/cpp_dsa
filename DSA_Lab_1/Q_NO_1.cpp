#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char quit;

    do
    {
        cout << "Enter the value one: ";
        cin >> num1;
        cout << "Enter the value two: ";
        cin >> num2;

        if (num1 > num2)
        {
            cout << "1st Value is Greater" << endl;
        }
        else if (num2 > num1)
        {
            cout << "2nd Value is Greater" << endl;
        }
        else
        {
            cout << "Both are equal" << endl;
        }
        cout << "Press Q to quit the program\nPress any key to continue" << endl;
        cin >> quit;
    } while(quit != 'q' && quit != 'Q');

    system("pause");
    return 0;
}