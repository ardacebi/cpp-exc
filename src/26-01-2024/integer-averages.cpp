#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    double media;

    cout << "Inserisci tre numeri interi per avere le loro media." << endl;
    
    cout << "1* numero: ";
    cin >> x;

    cout << "2* numero: ";
    cin >> y;

    cout << "3* numero: ";
    cin >> z;

    media = (x+y+z)/(double)3;

    cout << "La media dei numeri inseriti è " << media << "." << endl;

    return 0;
}