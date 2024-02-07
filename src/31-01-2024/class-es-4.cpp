#include <iostream>
using namespace std;

class Automobile {
    public:
    void set_price(double new_price);
    void set_profit(double new_profit);
    double get_price();

    private:
    double price;
    double profit;
    double get_profit();
};

int main() {
    Automobile hyundai, jaguar;

    hyundai.price = 4999.99; // price not accessible bc it is a private member of the class.
    jaguar.set_price(30000.97);
    double a_price, a_profit;
    a_price = jaguar.get_price(); 
    a_profit = jaguar.get_profit(); // get_profit is also not accessible bc it is also a private member.
    a_profit = hyundai.get_profit(); // ==

    if (hyundai == jaguar) {
        cout << "Want to swap cars?";
        hyundai = jaguar;
    }

    return 0;
}