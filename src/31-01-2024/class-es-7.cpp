#include <iostream>

using namespace std;

class Car {
    public: 
    string brand;
    string model;
    int year;
};

int main() {
    // create an object of car
    Car carobj1;
    carobj1.brand = "Tesla";
    carobj1.model = "Model Y";
    carobj1.year = 2023;

    //create another object of car
    Car carobj2;
    carobj2.brand = "Tesla";
    carobj2.model = "Model 3";
    carobj2.year = 2024;

    // print attribute values
    cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
    cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << "\n";

    return 0;
}