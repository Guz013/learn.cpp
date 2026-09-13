#include <iostream>

using namespace std;

class Animal {
public:
  virtual void makeSound() { cout << "Animal sound" << endl; }
  virtual ~Animal() {} // Good practice to create a virtual destructor, to make
                       // sure derived classes are correctly destructed
};

class Dog : public Animal {
public:
  void makeSound() override { cout << "Au au" << endl; }
};

class Cat : public Animal {
public:
  void makeSound() override { cout << "miau" << endl; }
};

int main(int argc, char *argv[]) {
  Dog dog;
  Cat cat;

  Animal *animals[2];

  animals[0] = &dog;
  animals[1] = &cat;

  for (Animal *animal : animals) {
    animal->makeSound();
  }

  return 0;
}
