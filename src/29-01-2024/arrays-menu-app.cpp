#include <iostream>

using namespace std;

int main() {
    string menu[3][3] = {
        {"Spaghetti", "Tagliatelle", "Iskender"},
        {"Tiramisu", "Profiterole", "Kunefe"},
        {"Coca", "Acqua", "Ayran"}
        }; // declaration is made in 3 however the computer accepets it as 0, 1 and 2
    
    struct menu {
        string primi[3] = {"Spaghetti", "Tagliatelle", "Iskender"};
        string dolci[3] = {"Tiramisu", "Profiterole", "Kunefe"};
        string bevande[3] = {"Coca", "Acqua", "Ayran"};
    };

    for (int i = 0; i < 3; i++) {
        cout << menu[i][0] << endl;
        cout << menu[i][1] << endl;
        cout << menu[i][2] << endl;
    };

    return 0;
}