#include <iostream>
using namespace std;

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "******************" << endl;
}

int main() {
    // check balance, deposit, withdraw, show menu

    int option;
    double balance = 500;

    showMenu();
    cout << "Option: ";
    cin >> option;
    
    switch(option) {
        case 1: cout << "Balance is: " << "$" << balance << endl; break;
        case 2: cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance = balance + depositAmount;
            break;
        case 3: cout << "Deposit amount: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance) {
            balance -= withdrawAmount;
        } else {
            cout << "Not enough money." << endl;
        }
        balance = balance - withdrawAmount;
        break;
    } while (option != 4);

    return 0;
}