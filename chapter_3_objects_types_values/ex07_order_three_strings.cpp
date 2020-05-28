#include "../lib/std_lib_facilities.h"

int main() {
    cout << "Enter three strings seperated by a space: ";
    string string1, string2, string3; // create variables to store user input
    cin >> string1 >> string2 >> string3; // read in user input and save in variables

    if (string2 < string1) swap(string2, string1);
    if (string3 < string2) swap(string3, string2);
    if (string2 < string1) swap(string2, string1);

    cout << string1 << " " << string2 << " " << string3 << "\n";
}

void swap(string &x, string &y) {
    string temp = x;
    y = x;
    x = y;
}
