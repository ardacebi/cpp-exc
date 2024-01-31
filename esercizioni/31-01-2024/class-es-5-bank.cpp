#include <iostream>

using namespace std;

class BankAccount {
    public: 
    void set(int dollars, int cents, double rate); 
    // data types chosen as dollars and cents are user-inputs and rate can be a decimal number.
    
    void set(int dollars, double rate);

    void update();

    double get_balance();

    double get_rate();

    void output(ostream& outs);
}

int main() {

    return 0;
}