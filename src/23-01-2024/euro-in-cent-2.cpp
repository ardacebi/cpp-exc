#include <iostream>

using namespace std;

int main() {
    double quant;
    int euro, cent;
    cout << "Quanti euro c'è l'hai? ";
    cin >> quant;
    euro = quant;
    cent = euro * 100.0;
    cout << euro << " euro sono uguali a " << cent << " centesimi." << endl;

    return 0;
}