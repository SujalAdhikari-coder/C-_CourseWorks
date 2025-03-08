//Create a program that takes a positive integer as input and determines whether it's a "bouncy number"
#include <iostream>
using namespace std;
bool isBouncy(int num) {  // Function to check if a number is bouncy
    int digits[10], count = 0;  // Array to store digits, count tracks the number of digits
    while (num > 0) {    // Extract digits from the number and store them in reverse order
        digits[count++] = num % 10;  // Store the last digit
        num /= 10;  // Remove the last digit
    }
    bool increasing = true, decreasing = true; // Flags to check if the number is increasing or decreasing
    for (int i = 0; i < count - 1; i++) {  // Check the order of digits
        if (digits[i] > digits[i + 1]) {
            increasing = false;  // Not strictly increasing
        }
        if (digits[i] < digits[i + 1]) {
            decreasing = false;  // Not strictly decreasing
        }
    }
    return !(increasing || decreasing);  // A number is bouncy if it is neither increasing nor decreasing
}
int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 100) {  // Check if the input number is valid
        cout << "Not a bouncy number (Bouncy numbers start from 100)" << endl;
    } else if (isBouncy(num)) {
        cout << num << " is a bouncy number." << endl;

    } else {
        cout << num << " is NOT a bouncy number." << endl;
    }
    return 0;
}
