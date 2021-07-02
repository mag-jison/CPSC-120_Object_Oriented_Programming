#include <iostream>

using namespace std;

int main() {
   int var = 8;
   void* var_ptr = 0;
   // NULL == nullptr == 0
   var_ptr = &var;
   // pointers are integers referencing a memory address; thus, types are meaningless
   // compilers will check types
   int* ptr = &var;
   int** ptr_to_ptr = &ptr;
   // pointer to pointer

   return 0;
}
