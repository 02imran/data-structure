#include <iostream>
using namespace std;

int main()
{
   char a[2];
   cin >> a;

   int i = 0;

   if(a[0] >= 'a' && a[0] <= 'z'){
      cout << "ALPHA" << "\n" << "IS SMALL";
   } else if(a[0] >= 'A' && a[0] <= 'Z'){
      cout << "ALPHA" << "\n" << "IS CAPITAL";
   } else {
      cout << "IS DIGIT" << endl;
   }
   return 0;
}