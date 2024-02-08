#include <iostream>
using namespace std;

// Count digits of a number

int main() {
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0) {
        cout << "You have entered 0.\n";
    } else {
        int counter = 0;
        while (number > 0) {
            number = number / 10;
            counter++;
        }
        cout << "Number contains " << counter << " digits.\n" << endl;
    }

    return 0;
}