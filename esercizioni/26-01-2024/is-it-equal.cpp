#include <iostream>

using namespace std;

int main () {
    int x, y;
    bool out;

    cout << "Inserisci due numeri interi." << endl;
    cin >> x;
    cin >> y;

    if (x == y) {
        out = true;
       
    } else {
        out = false;
    }

    cout << out << endl;

    return 0;
}