#include <iostream>
using namespace std;

double miglia, km;

int main () {
    cout << "Quanti mile?" << endl;
    cin >> miglia;
    km = miglia * 1.609;
    cout << "You have went " << km << " km." << endl;

    return 0;
}