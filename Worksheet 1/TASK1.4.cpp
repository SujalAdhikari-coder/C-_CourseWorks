#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the day of the week (1-7): ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid day of the week!" << endl;
    }

    return 0;
}
