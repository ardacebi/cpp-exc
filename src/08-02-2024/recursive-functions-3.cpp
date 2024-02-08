#include <iostream>
using namespace std;

void write_vertical (int n) {
    void write_vertical(int n) {
        if (n <= 9) cout << n << endl;
        else {
            write_vertical (n/10);
            cout << n % 10 << endl;
        }
    }
}
 
int main() {
    write_vertical();

    return 0;
}