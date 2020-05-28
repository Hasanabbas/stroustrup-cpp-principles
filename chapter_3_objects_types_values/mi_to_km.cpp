#include "../lib/std_lib_facilities.h"

int main() {
    // ask the user for a number in miles and store it in a variable
    cout << "Enter miles: ";
    double miles; // create variable to store user input
    cin >> miles; // read in user input

    cout << miles << " miles = " << miles * 1.609 << " kilometres\n"; // output the converted number
}
