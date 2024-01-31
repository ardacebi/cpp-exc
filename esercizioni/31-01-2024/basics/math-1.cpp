#include <iostream>

using namespace std;

/* IDENTIFYING HIGHEST AND LOWEST VALUE
In order to identify the highest and lowest value among few numbers, 
the max operator can be used.
*/

int main() {
    int x = 5;
    int y = 10;
    cout << max(x, y) << endl; // max identifies highest number as 10 and cout prints it.
    cout << min(x, y) << endl; // min identifies lowest number as 5 and cout prints it.
    return 0;
}