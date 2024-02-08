#include <iostream>
using namespace std;

// The program will demonstrate how functions benefit to the program.
// a prime number is a number that can be dividable to itself or 1 only.

bool isPrimeNumber(int number) {
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
}

int main() {
    for(int i = 1; i <= 1000; i++) {
        bool isPrime = isPrimeNumber(i);
        if(isPrime) {
            cout << i << " is a prime number.\n";
        }
    }

    return 0;
}


/* int main() {
    int number;
    cout << "Number: ";
    cin >> number;

    bool isPrimeFlag = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrimeFlag = false;
            break;
        }
    }

    if (isPrimeFlag) {
        cout << "Prime number." << endl;
    } else {
        cout << "Not prime number." << endl;
    }

    return 0;
} */