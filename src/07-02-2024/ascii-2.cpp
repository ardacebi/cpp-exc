#include <iostream>
using namespace std;

int main() {
    // Conversion from first five letters into ASCII characters.
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2)
    << " " << int(c3) << " " << int(c4) << " " << int (c5) << endl;

    // EX: Viceversa conversion of inputted five ASCII letters into letters.
    int n1, n2, n3, n4, n5;
    cout << "Enter 5 ASCII characters: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "Your message: " << char(n1) << "" << char(n2) << ""
    << char(n3) << "" << char(n4) << "" << char(n5) << "" << endl;

    return 0;
}