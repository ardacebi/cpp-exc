#include <iostream>
using namespace std;

// OPERATORS

int main() {
    // ARITHMETIC OPERATORS (+, -, *, /, %)

    // Addition (+)
    cout << 5 + 2 << endl; // out: 7

    // Subtraction
    cout << 10 - 5 << endl; // out: 5

    // Multiplication
    cout << 10 * 2 << endl; // out: 20

    // Division
    cout << 5 / 2 << endl; // out: 2
    // What? 2? Why is it not 2.5?
    // That is because in order to receive decimal outputs, one of the inputs also should be decimal.

    cout << 5.0 / 2.0 << endl; // out: 2.5 - because the inputs are in decimal.

    // Modulus (Remainder)
    cout << 10 % 2 << endl; // out: 0
    cout << 5 % 2 << endl; // out: 1

    // INCREMENT and DECREMENT operators
    int counter = 7;
    counter++;
    cout << counter << endl; // out: 8 bc 7++ = 8

    counter --;
    cout << counter << endl; // out: 7 bc 8-- = 7

    int counter2 = 7;
    cout << counter2++ << endl; // operation directly on line does not happen.
    // That is because the printing operation is happened first whereas the increment process happens after.

    cout << counter2 << endl; // out: 8 because from the increment operation on line 38.

    cout << ++counter2 << endl; //out: 9 because when put on the beginning solves the issue on line 38.

    system("clear"); // clears console, cls on windows and clear on macOS & Unix

    // <,>,<=,>=,==,!= RELATIONAL OPERATORS
    int a = 5, b = 5;
    cout << (a <= b) << endl; // out: 1 because it's equal.

    system("clear");

    // &&, ||, ! LOGICAL OPERATORS
    cout << !(a == 5 || b == 5) << endl; // out: 0 because real out is 1 but the ! in front of () neutralizes and reverses the result.

    

    return 0;
}