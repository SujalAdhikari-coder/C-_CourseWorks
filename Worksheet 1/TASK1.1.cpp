//1.1-Write a program that takes a temperature value from the user.
#include <iostream>
using namespace std;

int main() {
    double temperature;
    char choice;
    cout << "Enter the temperature: ";
    cin >> temperature;
    cout << "Convert to Celsius (C) or Fahrenheit (F)? ";
    cin >> choice;
    if (choice == 'C' || choice == 'c') {  // Perform conversion based on user's choice
        double celsius = (temperature - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius << "C" << endl;
    }
    else if (choice == 'F' || choice == 'f') {
        double fahrenheit = (temperature * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
    }
    else {
        cout << "Invalid choice! Please enter 'C' or 'F'." << endl;  // Handle invalid input
    }
    return 0;
}
