#include <iostream>
using namespace std;

// Recursive functions need a BASE CASE. If it doesn't have one, the program can crash of the infinite loop. Remember, RECURSIVE functions...

int factorialFinder(int x) {
    if (x == 1) { // BASE CASE that ends the recursive function.
        return 1;
    } else {
        return x * factorialFinder(x-1);
    }
}

int main() {
    cout << factorialFinder(5) << endl;

    return 0;
}