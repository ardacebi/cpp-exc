#include <iostream>
using namespace std;

void introduceMe(string name, string city) {
    cout << "My name is " << name << "." << endl;
    cout << "I am from " << city << "." << endl;
}

int main() {
    introduceMe("Arda", "Istanbul"); // program understands the strings as name and city.

    return 0;
}