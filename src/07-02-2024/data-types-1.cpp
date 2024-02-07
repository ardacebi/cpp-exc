#include <iostream>
using namespace std;

int main() {
    // Integer - - 4 bytes
    int yearOfBirth = 1995;

    // Character - - 1 byte
    char gender = 'f';

    // Boolean - true or false - 1 byte
    bool isOlderThan18 = true;

    // Float - - 4 bytes
    float averageGrade = 4.5;

    // Double - - 8 bytes
    double balance = 45678945856;

    // sizeof() function prints the size of a data type.
    cout << "Size of int is " <<sizeof(int) << " bytes\n";
    cout << "Size of char is " <<sizeof(char) << " bytes\n";
    cout << "Size of bool is " <<sizeof(bool) << " bytes\n";
    cout << "Size of float is " <<sizeof(float) << " bytes\n";
    cout << "Size of double is " <<sizeof(double) << " bytes\n";

    // INT_MIN & INT_MAX print the maximum and minimum possible values of integer.

    // -1, -2, -3 ,..., -2147483648
    cout << "Integer min value is " << INT_MIN << endl;

    // 0, +1, +2, +3 , ..., +2147483647
    cout << "Integer max value is " << INT_MAX << endl;

    cout << "Size of unsigned int is " << sizeof(unsigned int) << "bytes" << endl;
    cout << "Uint max value is " << UINT_MAX << endl;

    return 0;
}