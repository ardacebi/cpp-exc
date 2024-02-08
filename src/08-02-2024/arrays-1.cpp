#include <iostream>
using namespace std;

int main() {
    // // total, average, inTwoYears
    // float month1 = 100;
    // float month2 = 220;
    // float month3 = 300;
    // float month4 = 0;
    // float month5 = 200;
    // float month6 = 250;

    float monthsArray[6] = {100, 220, 300, 0, 200, 250};
                        //  0    1    2    3  4     5
    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5];
    float average = total / 6;
    float inTwoYears = average * 24;

    cout << "total= " << total << endl;
    cout << "average= " << average << endl;
    cout << "inTwoYears= " << inTwoYears << endl;

    return 0;
}