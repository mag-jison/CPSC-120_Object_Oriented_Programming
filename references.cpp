#include <iostream>
#include <string>

using namespace std;

int main(){
   int a = 5;
   cout << "Printing \"a\": " << a << endl;
   int& ref = a;
   // variable ref is mutable; meaning they will change the data of the referenced variable
   cout << "Initializing a reference integer \"ref\" to \"a\"" << endl;
   ref = 10;
   cout << "Re-assigning \"ref\" to: " << ref << endl;
   cout << "Printing \"a\": " << a << endl; 
   // unlike pointers where they can point to different addresses, references variables contain ONLY the address of the referenced variable

   return 0;
}
