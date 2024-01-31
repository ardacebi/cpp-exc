#include <iostream>

using namespace std;

int main() {
    string menu[3] = {"Primi", "Dolci", "Bevande"};
    cout << "Buongiorno e benvenuti alla trattoria di ARDA!" << endl;
    cout << "Per favore scegli tra i nostri opzioni." << endl;

    for (int i = 0; i < 3; i++) {
        cout << menu[i] << endl;
    }
    
    return 0;
}