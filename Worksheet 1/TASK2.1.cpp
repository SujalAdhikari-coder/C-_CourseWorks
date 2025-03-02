//Create a program that takes a positive integer as input and determines whether it's a "bouncy number"
#include <iostream>
using namespace std;
bool isBouncy(int num) {
    int digits[10], count = 0;
    while (num > 0) {
        digits[count++] = num % 10;
        num /= 10;
    }
    bool increasing = true, decreasing = true;
    for (int i = 0; i < count - 1; i++) {
        if (digits[i] > digits[i + 1]) {
            increasing = false;
        }
        if (digits[i] < digits[i + 1]) {
            decreasing = false;
        }
    }
    return !(increasing || decreasing);
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 100) {
        cout << "Not a bouncy number (Bouncy numbers start from 100)" << endl;
    } else if (isBouncy(num)) {
        cout << num << " is a bouncy number." << endl;
    } else {
        cout << num << " is NOT a bouncy number." << endl;
    }
    return 0;
}
