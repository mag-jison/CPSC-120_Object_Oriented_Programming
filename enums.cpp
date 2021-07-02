#include <iostream>

using namespace std;

// restricts the type of enum to "char", BUT keep in mind that enums are just integers
enum Type : char 
{
   A = 5, B, C
};

int main() {
   Type var = A;
   cout << "Variable \"var\" is initialized to: " << A << endl;

   return 0;
}
