#include <iostream>
using namespace std;

// ASCII - American Standard Code for Information Interchange

int main() {
    cout << (int)'a' << endl; // out 97
    cout << int('a') << endl; // out 97
    cout << int ('A') << endl; // out 65
    // difference between the outputs of a and A is to distinguish uppercase letters.

    cout << char(65) << endl; // out A, viceversa conversion from ASCII to character.

    return 0;
}