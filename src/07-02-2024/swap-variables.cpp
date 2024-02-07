#include <iostream>
using namespace std;

// Program for swapping values of two variables

int main() {
    int a = 20;
    int b = 10;

    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}