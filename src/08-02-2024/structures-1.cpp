#include <iostream>
using namespace std;

struct Smartphone {
    string name; 
    int storageSpace;
    string color;
    float price;
};

struct Person {
    string name;
    int age;
    Smartphone smartphone;
};

void printSmartphoneInfo(Smartphone smartphone) {
    cout << "name: " << smartphone.name << endl;
    cout << "storageSpace: " << smartphone.storageSpace << " GB" << endl;
    cout << "color: " << smartphone.color << endl;
    cout << "price: " << smartphone.price << endl << endl;
}

// Not sustainable ! We use structures instead.
/* int main() {
    string name = "iPhone 15 Pro Max";
    int storageSpace = 256;
    string color = "Natural Titanium";
    float price = 1199.00;

    string name2 = "Samsung Galaxy Note5";
    int storageSpace2 = 64;
    string color2 = "Gray";
    float price2 = 899.00;

    return 0;
} */

void printPersonInfo(Person person) {
    cout << "name: " << person.name << endl;
    cout << "age: " << person.age << endl;
    printSmartphoneInfo(person.smartphone);
}

int main() {
    Smartphone smartphone;
    smartphone.name = "iPhone 15 Pro Max";
    smartphone.storageSpace = 256;
    smartphone.color = "Natural Titanium";
    smartphone.price = 1199.99;
    
    Smartphone smartphone2;
    smartphone2.name = "Samsung Galaxy Note5";
    smartphone2.storageSpace = 64;
    smartphone2.color = "Gray";
    smartphone2.price = 899.99;

    // printSmartphoneInfo(smartphone);
    // printSmartphoneInfo(smartphone2);

    Person p;
    p.name = "Arda";
    p.age = 20;
    p.smartphone = smartphone;
    printPersonInfo(p);

    return 0;
}