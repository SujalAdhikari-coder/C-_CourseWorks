//Write a program with a class Circle
#include <iostream>
using namespace std;
class Circle {
private:
    float radius; // Private member variable for radius
public:
    Circle(float r) { // Constructor to initialize radius
        radius = r;
    }
    float getArea() const { // Function to calculate the area of the circle
        return 3.14159 * radius * radius;
    }
    friend void compareTwoCircles(const Circle& c1, const Circle& c2); // Friend function to compare two circles
};
void compareTwoCircles(const Circle& c1, const Circle& c2) { // Function to compare the areas of two circles
    float area1 = c1.getArea();
    float area2 = c2.getArea();
    cout << "Circle 1 Area: " << area1 << endl;
    cout << "Circle 2 Area: " << area2 << endl;
    if (area1 > area2) {
        cout << "Circle 1 has a larger area." << endl;
    } else if (area2 > area1) {
        cout << "Circle 2 has a larger area." << endl;
    } else {
        cout << "Both circles have the same area." << endl;
    }
}
int main() {
    float r1, r2;
    cout << "Enter radius of first circle: ";
    cin >> r1;
    cout << "Enter radius of second circle: ";
    cin >> r2;
    Circle circle1(r1), circle2(r2);
    compareTwoCircles(circle1, circle2); // Comparing the two circles
    return 0;
}
