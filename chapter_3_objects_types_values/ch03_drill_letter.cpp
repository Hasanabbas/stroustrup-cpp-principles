#include "../lib/std_lib_facilities.h"

int main() {
   // greeting
   cout << "Enter the name of the person you want to write to: ";
   string first_name;
   cin >> first_name;
   string message = "Dear " + first_name + ",\n";

   // body
   message += "   How are you? I'm fine. I miss you.";
   message += " I've been spending my time learning programming. It is really fun.\n";

   // friend
   cout << "Give the name of a friend: ";
   string friend_name;
   cin >> friend_name;
   message += "   Have you seen " + friend_name + " lately?\n";

   // friend sex
   char friend_sex = 0;
   do {
      cout << "Is your friend male or female (m/f)? ";
      cin >> friend_sex;
   } while (friend_sex != 'm' && friend_sex != 'f');

   message += "   If you see " + friend_name + " please ask ";
   if (friend_sex == 'm') {
      message += "him ";
   } else {
      message += "her ";
   }
   message += "to call me.\n";

   cout << message;
}
