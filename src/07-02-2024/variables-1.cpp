#include <iostream>
using namespace std;

int main() {
    cout << "What is your annual salary?" << endl;
    float annualSalary; // camel case
    cin >> annualSalary;
    // float and double are similar data types. Float occupies less memory than double though.
    float monthlySalary = annualSalary / 12;
    float tenYearSalary = annualSalary * 10;
    // variable names cannot start with numbers. ex: 10YearSalary is INVALID. 
    // tenYearSalary is VALID. Though it can end with numbers. ex: YearSalary10 is VALID.

    cout << "Your monthly salary is " << monthlySalary << endl;
    cout << "In 10 years you will earn " << tenYearSalary << endl;

    char character = 'a';

    return 0;
}