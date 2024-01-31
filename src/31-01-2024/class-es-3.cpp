#include <iostream>

using namespace std;

class DayOfYear {
    public:
    void input();
    void output();

    void set(int new_month, int new_day);
    int get_month();
    int get_day();

    private: // Private members cannot be accessed within the program directly (main).
    void check_date();
    int month;
    int day;
};

int main() {
    DayOfYear today, bach_birthday;

    cout << "Enter today's date:\n";
    today.input();
    cout << "Today's date is ";
    today.output();
    
    bach_birthday.set(3, 21);
    cout << "J. S. Bach's birthday is ";
    bach_birthday.output();

    if (today.get_month() == bach_birthday.get_month() && today.get_day() == bach_birthday.get_day())
    cout << "Happy Birthday Johann Sebastian!\n";
    else {
        cout << "Happy Unbirthday Johann Sebastian!\n";
        return 0;
    };
}


void DayOfYear::input() {
    cout << "Enter the month as a number: ";
    cin >> month; // Elements declared as private are accessible via className::XX.
    cout << "Enter the day of the month: ";
    cin >> day;
    check_date();
}

void DayOfYear::output() {

}

void DayOfYear::set(int new_month, int new_day) {
    month = new_month;
    day = new_day;
    check_date();
}

void DayOfYear::check_date() {
    if ((month < 1) || (month > 12) || (day < 1) || (day > 31)) {
        cout << "Illegal date. Aborting program.\n";
        exit(1);
    }
}

int DayOfYear::get_month() {
    return month;
}

int DayOfYear::get_day() {
    return day;
}