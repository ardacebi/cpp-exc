#include <iostream>
using namespace std;

/* 
    Scrivere una funzione che PRENDE UN ARRAY di lunghezza LENGTH e lo inizializza
    con numeri CASUALI compresi tra 0 e 3*length+1.
*/

int main() {
    srand(time(0));
    cout << rand() % 90;

    return 0;
}