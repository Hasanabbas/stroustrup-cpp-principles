#include "../lib/std_lib_facilities.h"

int main() {
    cout << "Enter three integers seperated by a space: ";
    int val1, val2, val3; // create variables to store user input
    cin >> val1 >> val2 >> val3; // read in user input and save in variables

    if (val2 < val1) swap(val2, val1);
    if (val3 < val2) swap(val3, val2);
    if (val2 < val1) swap(val2, val1);

    cout << val1 << " " << val2 << " " << val3 << "\n";
}

void swap(int &x, int &y) {
    int temp = x;
    y = x;
    x = y;
}
