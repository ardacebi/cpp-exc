/*
scrivere un programma che memorizza in un array di lunghezza
length valori random tra 0 e 3*length+1
*/

#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    cout << rand() % 90;
    return 0;
}