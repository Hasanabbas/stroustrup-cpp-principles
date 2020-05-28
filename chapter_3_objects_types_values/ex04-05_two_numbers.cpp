#include "../lib/std_lib_facilities.h"

int main() {
    cout << "Enter two integers seperated by a space: ";
    // int val1, val2; // create variables to store user input
    double val1, val2; // change int to double to see the difference
    cin >> val1 >> val2; // read in user input and save in variables

    cout << "Smaller number: " << ((val1 < val2) ? val1 : val2) << "\n"
         << "Larger number: " << ((val1 > val2) ? val1 : val2) << "\n"
         << "Sum: " << (val1 + val2) << "\n"
         << "Difference: " << (val1 - val2) << "\n"
         << "Product: " << (val1 * val2) << "\n"
         << "Ratio: " << (val1 / val2) << "\n";
}
