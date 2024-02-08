#include <iostream>
using namespace std;

int main() {
    int hostUserNum, guestUserNum;

    cout << "Host: ";
    cin >> hostUserNum;
    system("clear");

    cout << "Guest: ";
    cin >> guestUserNum;

    // Shorter version of if-else statement
    // IF hostUserNum is equals to guestUserNum, then print correct and else, print failed.
    (hostUserNum == guestUserNum)? cout << "Correct!\n" : cout << "Failed!\n";

    // if (hostUserNum == guestUserNum) {
    //     cout << "Correct!" << endl;
    // } else {
    //     cout << "Failed!" << endl;
    // }

    return 0;
}