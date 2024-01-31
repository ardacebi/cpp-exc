#include <iostream>

using namespace std;

/* CHANGING CHARACTERS
In order to change characters of a string, it is called
regularly as stringName[characterNum] and set equal as
(= new letter).
*/

int main() {
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString << endl;
    
    return 0;
}