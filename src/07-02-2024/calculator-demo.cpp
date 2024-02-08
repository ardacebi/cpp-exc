#include <iostream>
using namespace std;

// Switch case statements

int main() {
    float num1, num2;
    char operation;

    cout << "**Arculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '-': cout << num1 << operation << num2 << " = " << num1 - num2 << endl; break;
        case '+': cout << num1 << operation << num2 << " = " << num1 + num2 << endl; break;
        case '/': cout << num1 << operation << num2 << " = " << num1 / num2 << endl; break;
        case '*': cout << num1 << operation << num2 << " = " << num1 * num2 << endl; break;
        case '%': 
            bool isNum1Int, isNum2Int;
            isNum1Int = ((int)num1 == num1); // 5 == 5.0
            isNum2Int = ((int)num2 == num2);

            if(isNum1Int && isNum2Int) {
                cout << num1 << operation << num2 << " = " << (int)num1 % (int)num2;
            } else {
                cout << "Not valid";
            } break;
        default: cout << "Don't hack me!" << endl;
    }

    return 0;
}