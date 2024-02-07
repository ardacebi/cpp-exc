#include <iostream>
using namespace std;

int main() {
    string menu[3] = {"Primi", "Dolci", "Bevande"};
    cout << "Buongiorno e benvenuti alla trattoria ARDA!" << endl;
    cout << "Per favore scegli uno dei nostri piatti." << endl;

    for (int i = 0; i < 3; i++) { // i is declared, incremented by one until 3
        cout << menu[i] << endl; // printed every item until i is 3
    }

    return 0;
}