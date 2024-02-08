#include <iostream>
using namespace std;

// RECURSIVE FUNCTIONS - recursion is a process where a function invokes itself.
// Ex: Sum numbers between m and n.

int recursive_sum(int m, int n) { // m = 3, n = 4
    if (m == n) {
        return m;
    }
    return m + recursive_sum(m + 1, n); // 9
}

int main() {
    int m = 2, n = 4;
    cout << "Sum = " << recursive_sum(m, n) << endl;

    /* int sum = 0;
    for (int i = m; i < n; i++) {
        sum = sum + i;
    }

    cout << "Sum = " << sum << endl; */

    return 0;
}