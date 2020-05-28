#include "../lib/std_lib_facilities.h"

int main() {
   //  cout << "Please enter your name and age\n";
   //  string first_name = "???"; // string variable ("???" means "don't know the name")
   //  double age = 0; // integer variable (0 means "don't know the age")
   //  cin >> first_name >> age; // read a string followed by an integer
   //  cout << "Hello, " << first_name << " (age in months: " << age * 12 << ")\n";

   //  int number_of_words = 0;
   //  string previous = " "; // previous word, initialize to space
   //  string current; // current word
   //  while (cin >> current) { // read a stream of words
   //      ++number_of_words; // increase word count
   //      if (previous == current) { // check if the word is the same as the last
   //          cout << "word number" << number_of_words << " repeated: " << current << "\n";
   //      }
   //      previous = current;
   //  }

   // int a = 20000;
   // char c = a; // try to squeeze a large int into a char
   // int b = c;
   // if (a != b) {
   //    cout << "oops!: " << a << " != " << b << endl;
   // } else {
   //    cout << "Wow! We have large characters\n" << endl;
   // }

   double d = 0;
   while (cin >> d) {
      int i {d};
      char c {i};
      int i2 {c};
      cout << "original value = " << d << "\n"
           << "as an integer = " << i << "\n"
           << "as a character = " << c << "\n"
           << "the character to an int = " << i2 << "\n";
   }
}