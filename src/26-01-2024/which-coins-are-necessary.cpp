#include <iostream>
using namespace std;

int main() {
    double quant;
    int euro, cent;

    cout << "Buongiorno! Quanti euro devi pagare oggi? ";
    cin >> quant;
    euro = quant;
    cent = 100*(quant-euro);
    
    cout << "monete da 2 euro: " << euro/2 << endl;
    euro = euro%2;

    cout << "monete da 1 euro: " << euro/1 << endl;
    euro = euro%1;

    cout << "monete da 50 cent: " << cent/50 << endl;
    cent = cent%50;

    cout << "monete da 20 cent: " << cent/20 << endl;
    cent = cent%20;

    cout << "monete da 10 cent: " << cent/10 << endl;
    cent = cent%10;

    cout << "monete da 5 cent: " << cent/5 << endl;
    cent = cent%5;

    cout << "monete da 2 cent: " << cent/2 << endl;
    cent = cent%2;

    cout << "monete da 1 cent: " << cent;

    return 0;
}