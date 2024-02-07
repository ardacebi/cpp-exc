#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 4;
    cout << a + (b++) << endl; // out: 9
    cout << (--a) + b << endl; // out: 9

    cout << !(true && false) << endl; // out: 1
    cout << (true && false || true) << endl; // out: 1

    int x = 7;
    cout << (++x <= 9 && x + 2 >= 10) << endl; // out: 1

    int y = 3;
    cout << (y == y++) << endl; // out: 1 (0????)

    float z = 8;
    z += 2;
    cout << z << endl; // out: 10
    z /= 2;
    cout << z << endl; // out: 5

    return 0;
}