#include <iostream>
using namespace std;

void options() {
    cout << "Type in the letter chosen or Q to finish" << endl;
    cout << "A: Athletics" << endl;
    cout << "S: Swimming" << endl;
    cout << "F: Football" << endl;
    cout << "B: Badminton" << endl;
}

int main() {
    int athletics = 0, swimming = 0, football = 0, badminton = 0, i;
    char choice;
    for (i=0; i < 10; i++) {
        options();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                athletics++;
                break;
            case 'S':
            case 's':
                swimming++;
                break;
            case 'F':
            case 'f':
                football++;
                break;
            case 'B':
            case 'b':
                badminton++;
                break;
            case 'Q':
            case 'q':
                break;
            default:
                cout << "This is not the option" << endl;
        }
        if (choice == 'Q' || choice == 'q') {
            break;
        }
    }

    int gameNum[] = {athletics, swimming, football, badminton};
    string gameNames[] = {"Athletics", "Swimming", "Football", "Badminton"};
    int max = gameNum[0], index = 0;

    for (int i=1; i<4; i++) {
        if (max < gameNum[i]) {
            max = gameNum[i];
            index = i;
        }
    }
    cout << "\n";
    cout << "-----------------------------------\n"; 
    cout << "Lovers of Athletics = " << athletics << endl;
    cout << "Lovers of Swimming = " << swimming << endl;
    cout << "Lovers of Football = " << football << endl;
    cout << "Lovers of Badminton = " << badminton << endl;
    cout << "-----------------------------------\n";
    cout << "\n";
    
    if (i > 0)
        cout << "Most popular game = " << gameNames[index] << endl;

    system("pause");
    return 0;
}