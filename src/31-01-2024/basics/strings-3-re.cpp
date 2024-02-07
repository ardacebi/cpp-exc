#include <iostream>
using namespace std;

void fullNameFunc() {
    string fullName;
    cout << "What is your full name?" << endl;
    cin >> fullName;
    cout << "Your full name is: " << fullName << endl;
}

void properFullNameFunc() {
    string properFullName;
    cout << "What is your full name?" << endl;
    getline(cin, properFullName);
    cout << "Your (proper) full name is: " << properFullName << endl;
}

int main() {
    // fullNameFunc();
    properFullNameFunc();

    return 0;
}