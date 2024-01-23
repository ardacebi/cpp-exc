#include <iostream>

using namespace std;

int main() {
    double euro, cent;
    cout << "Quanto euro vuoi convertire in centesimi?" << endl;
    cin >> euro;
    cent = euro * 100.0;
    cout << euro << " è uguale a " << cent << " centesimi" << endl;

    return 0;
}