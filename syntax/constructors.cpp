#include <iostream>

using namespace std;

class Person {
public:
  string name;
  Person() { name = "(Not Informed)"; }
};

int main(int argc, char *argv[]) {
  Person person1;

  cout << person1.name << endl;

  person1.name = "Guz";

  cout << person1.name << endl;

  return 0;
}
