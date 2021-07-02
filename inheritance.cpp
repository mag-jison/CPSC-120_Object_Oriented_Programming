#include <iostream>
#include <string>

using namespace std;

class Base {
private:
   size_t _token; 

public:
   Base() : _token(0) {}
   Base(size_t token) : _token(token) {}
   
   size_t& getToken() { return _token; }
};

class Derived : public Base {
private:
   string unique_name; 

public:
   Derived(size_t token) {
      getToken() = token;
   }

   void setName(const string& name) {
      unique_name = name;
   } 

   string getName() const { return unique_name; }
};

int main() {
   Base base(1383); 
   Derived derived(523);

   cout << "Base_Token: " << base.getToken() << "\n\n";

   derived.setName("Jason"); 
   cout << "Derived_Token: " << derived.getToken() << endl << "Derived_Name: " << derived.getName();

   return 0;
}
