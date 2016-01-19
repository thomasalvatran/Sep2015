#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Dog {
private:
  const string name;
  const string breed;
  int height;
  int weight;
  int count;

public:
  void test() {
    count = 110;
    cout << count << endl;
  }
  string getName();
  string getBreed();
  Dog(string const name, string const breed) : name(name), breed(breed) {}
//  { this->name = name; this->breed = name;}


  //    friend class DogInterface;
};

class DogInterface { // Not a derived class of Dog (independence class)
public:
  //    const string name;
  //    const string breed;
  //    struct Dog DogStruct;  //???
  //     Dog doginterace; // when Dog has a default ctor
  //        Dog d;
  Dog doginterface;
  //    DogInterface(string name, string breed) : name(name), breed(breed){}
  DogInterface(string name, string breed) : doginterface(name, breed) {}
  //    Dog(string name, string breed) : doginterface(name, breed) {}
};

string Dog::getName() { return name; }

string Dog::getBreed() { return breed; }

class Derived_Dog : public Dog { // derived class
public:
  static Dog d;
  Derived_Dog(string name, string breed) : Dog(name, breed) {}
};

Dog Derived_Dog::d("staticDog", "staticBreed");

int main() {

  Dog dog("Tippy", "Spoodle");
  DogInterface dogint("Dog", "breed");
  dogint.doginterface.test();
  cout << dogint.doginterface.getName() << " " << dogint.doginterface.getBreed()
       << endl;

//  Derived_Dog d("Tippy", "cocker");
//  cout << d.getName() << endl;
  Derived_Dog test ("derivedDog", "derivedBreed");
  cout << test.getName() << endl;
  cout << test.d.getName() << endl; //static class
}
