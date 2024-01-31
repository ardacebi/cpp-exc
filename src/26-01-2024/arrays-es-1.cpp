#include <iostream>
using namespace std;

int main() {
    int i, score[5], max;

    cout << "Inserisci 5 score:\n";
    cin >> score[0];
    max = score[0];
    for (i = 1; i < 5; i++) {
        cin >> score[i];
        if (score[i] > max)
        max = score[i];
    }

    cout << "Il score massimo è " << max << endl;

    return 0;
}