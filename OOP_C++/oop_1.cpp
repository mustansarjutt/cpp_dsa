#include<iostream>
#include<string>
using namespace std;
class Animal {
    private:
        int legs;
        string name;
    public:
        int getLeg() {
            return legs;
        }
        string getName() {
            return name;
        }
        void setValues(int legs, string name) {
            this->name = name;
            this->legs = legs;
        }
        void printData();
        void getValues() {
            cout << "Enter the name of Animal: ";
            getline(cin, name);
            cout << "Enter the number of legs: ";
            cin >> this->legs;
        }
};
void Animal :: printData() {
    cout << "Name = " << this->name << endl;
    cout << "Legs = " << this->legs << endl;
}
int main() {
    Animal cat, dog;
    cat.setValues(4, "Cat");
    cat.printData();
    dog.getValues();
    dog.printData();
    system("pause");
    return 0;
}