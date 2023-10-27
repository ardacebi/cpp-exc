#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_RANDOM = 100;  
int n;

int main() {
    cout << "Inserisci un numero" << endl;
    cin >> n;

    srand(time(NULL));

    int histogram[MAX_RANDOM] = {0};

    for (int i = 0; i < n; i++) {
        int randNum = rand() % MAX_RANDOM;
        histogram[randNum]++;
    }

    cout << "Istogramma:\n";
    for (int i = 0; i < MAX_RANDOM; i++) {
        if (histogram[i] > 0) {
            cout << i << ": ";
            for (int j = 0; j < histogram[i]; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}