#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// ESERCIZIONE: si scriva una programma che prende N interi in input, determina quali sono i duplicati e crea un nuovo array con i soli elementi non duplicati.

int main() {
    int N;
    
    cout << "Enter the number of integers: ";
    cin >> N;

    int arr[N];

    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bool *isDuplicate = new bool[N];
    for (int i = 0; i < N; i++) {
        isDuplicate[i] = false;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate[j] = true; 
            }
        }
    }

    int uniqueCount = 0;
    for (int i = 0; i < N; i++) {
        if (!isDuplicate[i]) {
            uniqueCount++;
        }
    }

    int uniqueArr[uniqueCount];
    int index = 0;
    for (int i = 0; i < N; i++) {
        if (!isDuplicate[i]) {
            uniqueArr[index] = arr[i];
            index++;
        }
    }

    cout << "Unique elements are:" << endl;
    for (int i = 0; i < uniqueCount; i++) {
        cout << uniqueArr[i] << " ";
    }
    cout << endl;

    return 0;
}
