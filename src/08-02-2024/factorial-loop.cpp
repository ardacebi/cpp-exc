#include <iostream>
using namespace std;

// The factorial of a number
// 6 != 1 * 2 * 3 * 4 * 5 * 6 = 720

int main() {
    int number;
    cout << "Number: ";
    cin >> number; // 3

    int factorial = 1; // 1

    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    cout << number << "!=" << factorial << endl;

    return 0;
}