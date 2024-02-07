#include <iostream>
using namespace std;

/* STRING CONCATENATION
The + operator can be used between existing strings to add them together
to make a new string. This is called CONCATENATION.
*/

int main() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName + "\n";
    cout << fullName;

    return 0;
}