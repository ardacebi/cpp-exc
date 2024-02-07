#include <iostream>
using namespace std;

// Ex: user enters side lengths of a triangle (a, b, c)
// Program should write whether that triangle is equilateral, isosceles or scalene.

int main() {
    float a, b, c; // float can be used as small numbers will be inputted.
    cout << "Please enter side lengths of the triangle:" << endl;
    cin >> a >> b >> c;

    if (a==b && b==c) { // EQUILATERAL if all sides are equal.
        cout << "The triangle is EQUILATERAL!" << endl;
    } else if (a != b && a != c && b != c) { // SCALENE if all sides are different.
        cout << "The triangle is SCALENE!" << endl;
    } else { // ISOSCELES if any of the two sides are equal.
        cout << "The triangle is ISOSCELES!" << endl;
    }

    return 0;
}