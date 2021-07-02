#include <iostream>
#include <string>

using namespace std;

class Car {
private:
   string _name;
   size_t _year;

public:
   enum Model : unsigned int {
      Unknown = 0,
      Cheap = 20000,
      Affordable = 50000,
      Luxury = 200000
   } _type;

public:
   Car()
      : _name("NULL"), _year(0), _type(Unknown) {}

   Car(const string& name, const size_t& year, const Model& type)
      : _name(name), _year(year), _type(type) {}

   void setName(const string& name) {
      _name = name;
   }

   void setYear(const size_t year) {
      _year = year;
   }

   void setModel(const Model& type) {
      _type = type;
   }

   virtual string getName() const {
      return _name;
   }

   size_t getYear() const {
      return _year;
   }

   unsigned int getModel() const {
      return _type;
   }
};

class Audi : public Car {
private:
   size_t licensed_token;
   Model _type;

public:
   Audi()
      : licensed_token(583283)
   {
      setModel(Affordable);
   }

   string getName() const override {
      return "Audi";
   }
};

struct Customer {
   string _name;
   size_t _age;

   Customer(const string& name, const size_t& age)
      : _name(name), _age(age) {}
   
   void printReceipt(Car* car) {
      cout << "Customer: " << _name << "\n---------\nCar Name: " << car->getName() << "\nCar Year: " << car->getYear() << "\nCar Model: " << car->getModel() << "\n\n";
   }
};

int main(){
   Customer customer("Joe", 65);

   Car* car = new Car();
   customer.printReceipt(car);

   Audi* audi = new Audi();
   customer.printReceipt(audi);

   return 0;
}
