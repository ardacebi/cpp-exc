#include <iostream>

using namespace std;

int main() {

    const int length = 20;
    int A[length];

    int n = 2;
    A[n+2] = 35;

    cout << A[4] << endl;

    return 0;
}