#include <iostream>

using namespace std;

int main() {
    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    const int length = 20;
    int A[length];

    int n = 2;
    A[n+2] = 35;

    return 0;
}