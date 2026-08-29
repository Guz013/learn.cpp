// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>

using namespace std;

class Person {
private:
  string name;
  int age;
  float height;
  string address;
  int siblings;

public:
  Person(string initName, int initAge, float initHeight, string initAddress,
         int initSiblings) {
    name = initName;
    age = initAge;
    height = initHeight;
    address = initAddress;
    siblings = initSiblings;
  }

  bool onlyChild() { return siblings <= 0; }

  void printInfo() {
    cout << "-------------------" << endl;
    cout << "Nome: " << name << endl;
    cout << "Idade: " << age << endl;
    cout << "Altura: " << height << endl;
    cout << "Endereço: ";
    if (address == "") {
      cout << "(Não Informado)" << endl;
    } else {
      cout << address << endl;
    }
    if (onlyChild()) {
      cout << "Filho(a) ùnico(a)" << endl;
    } else {
      cout << "Não é filho(a) ùnico(a)" << endl;
      cout << "Número de irmãos: " << siblings << endl;
    }
    cout << "-------------------" << endl;
    cout << endl;
  }
};

int main(int argc, char *argv[]) {
  Person person("Guz", 21, 1.73, "", 0);

  person.printInfo();

  Person person2("Kei", 18, 1.74, "São Paulo", 1);

  person2.printInfo();

  Person person3("Abraão", 18, 1.60, "Rio Grande do Sul", 8);

  person3.printInfo();

  return 0;
}
