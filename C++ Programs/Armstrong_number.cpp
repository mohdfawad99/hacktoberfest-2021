// Program to find if n digit number is an armstrong number or not.

#include<bits/stdc++.h>
#include<cstring>
#include<math.h>
using namespace std;

int main() {
   int num;
   int initialNum;
   int remainder, n = 0, 
   int result = 0;
   int power;

   cout << "Enter an integer: ";
   cin >> num;

   initialNum = num;

   while (initialNum != 0) {
      initialNum /= 10;
      ++n;
   }
   initialNum = num;

   while (initialNum != 0) {
      remainder = initialNum % 10;
      power = round(pow(remainder, n));
      result += power;
      initialNum /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number.";
   else
      cout << num << " is not an Armstrong number.";
   return 0;
}
