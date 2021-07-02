#include <iostream>
#include <string>

using namespace std;

class Base {
public:
   virtual string getName() { return "Base"; }
};

class Derived : public Base {
private:
   string m_Name; 

public:
   Derived(const string& name) : m_Name(name) {}
   string getName() override { return m_Name; }
};

// Notice that the getName function will execute from the current class
// In this senario, string "base" will be printed twice
void printName(Base* base) {
   cout << base->getName() << endl;
}

int main() {
   // Virtual Functions allow you to override methods from a derived/sub class
   Base* b = new Base();
   printName(b);

   Derived* d = new Derived("Derived");
   printName(d);

   // SOLUTION: write "virtual" for the overlooded function from the BASE class
   // OPTIONAL: write "override" for the overloaded function from the DERIVED class

   return 0;
}
