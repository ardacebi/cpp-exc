#include <iostream>
using namespace std;

void function() {
    cout << "Hello from function()" << endl;
}

int main() {
    cout << "Hello from main()" << endl;
    function();

    return 0;
}