#include <iostream>
using namespace std;

/* getline() FUNCTION
In C++, in order to print two words such as the full name
when asked with the cin function, it is necessary
to use the getline() function in order to prevent
the program from stopping when encountered with a blank
character such as spacing.
*/

// WITHOUT getline(), normal implementation
void fullNameFunc() {
string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName << endl;
}

// Input: Arda Cebi, however output comes as: Arda
// This is because the program aborts when it sees the space.

// WITH getline() implementation
void properFullNameFunc() {
    string properFullName;
    cout << "Type your full name: ";
    getline (cin, properFullName);
    cout << "Your (proper) full name is: " << properFullName << endl;
}

int main() {
    // fullNameFunc();
    properFullNameFunc();
    return 0;
}