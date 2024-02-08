#include <iostream>
using namespace std;

// Reversing number

int main() {
    int number, reversedNumber = 0; // 0
    cout << "Number: ";
    cin >> number; // 123

    while (number != 0) {
        reversedNumber = reversedNumber * 10;
        int lastDigit = number % 10;
        reversedNumber = reversedNumber + lastDigit;
        number = number / 10;
    }

    cout << "Reversed: " << reversedNumber << endl;

    return 0;
}