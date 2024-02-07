#include <iostream>
using namespace std;

int main () {
    int intMax = INT_MAX;
    cout << intMax << endl;

    /* DATA TYPE OVERFLOW
    The output of the following line should increase 2147483647 to 2147483648 right?
    Well as you can see that's not the case. Because we were already printing
    the maximum allowed value. What we call a data type overflow happens and
    just like a clock that goes from 9, 10, 11, 12 to 1 instead of 13.
    */
    cout << intMax + 1;

    return 0;
}