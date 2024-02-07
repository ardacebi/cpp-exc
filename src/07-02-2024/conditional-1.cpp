#include <iostream>
using namespace std;

// Ex: user enters integer number
// Program write out if that number is even or odd

int main() {
    int userInput;
    cout << "Please enter a whole number: ";
    cin >> userInput;

    // The % operator is used to determine if a number has a remainder or not.
    if((userInput % 2) == 0) {
        cout << "The number is even." << endl;
    } else {
       cout << "The number is odd." << endl;
    }

    return 0;
}