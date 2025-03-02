//Write a program that manages a cinema ticket booking system. The program should display a 5x5 seating arrangement
#include <iostream>
using namespace std;
int main() {
    char seats[5][5] = {
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', 'O', 'O', 'O', 'O'}
    };
    while (true) {
        cout << "Cinema Seats:\n";
        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < 5; col++) {
                cout << seats[row][col] << " ";
            }
            cout << endl;
        }
        cout << "Which row (1-5)? ";
        int row;
        cin >> row;
        cout << "Which column (1-5)? ";
        int col;
        cin >> col;
        if (row == 0 && col == 0) {
            cout << "Exiting\n";
            break;
        }
        if (row < 1 || row > 5 || col < 1 || col > 5) {
            cout << "That's not a valid seat. Try again.\n";
            continue;
        }
        row--;
        col--;
        if (seats[row][col] == 'X') {
            cout << "Sorry, that seat is taken. Try another.\n";
            continue;
        }
        seats[row][col] = 'X';
        cout << "Seat booked!\n";
        char choice;
        cout << "Do you want to book more seats? (y/n): ";
        cin >> choice;
        if (choice == 'n' || choice == 'N') {
            cout << "Exiting\n";
            break;
        }
    }
    return 0;
}
