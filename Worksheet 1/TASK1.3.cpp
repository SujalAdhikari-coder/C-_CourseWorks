//Write a program that reads an array of integer numbers from the user and sorts the numbers in the ascending order.
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
