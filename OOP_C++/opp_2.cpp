#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string str;

public:
    void read(void);
    bool checkBinary(void);
    void display(void);
    void onesCompliment(void);
};

void Binary :: read(void)
{
    cout << "Enter the binary number:" << endl;
    cin >> str;
}

void Binary :: display(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
    }
    cout << "\n";
}

void Binary :: onesCompliment(void)
{
    if (checkBinary()) {
        for (int i = 0; i < str.length(); i++)
        {
            if (str.at(i) == '0')
            {
                str.at(i) = '1';
            }
            else
            {
                str.at(i) = '0';
            }
        }
    }
    else {
        cout << "Ones complement of non-binary number cannot be taken" << endl;
    }
}

bool Binary :: checkBinary(void)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            // break;
            return false;
        }
    }
    return true;
}

int main()
{
    Binary b1;
    b1.read();
    bool bin = b1.checkBinary();
    if (bin) {
        cout << "This is a binary number" << endl;
    }
    else {
        cout << "This is not a binary number" << endl;
    }
    b1.display();
    b1.onesCompliment();
    b1.display();
    cout << "Hello" << endl;
    return 0;
}