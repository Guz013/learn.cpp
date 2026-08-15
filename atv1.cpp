#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  string name;
  int age;
  string profession;

  void register_person() {
    cout << "Seu nome: ";
    getline(cin, name);

    cout << "Idade: ";
    cin >> age;
    cin.ignore();

    cout << "Profissão: ";
    getline(cin, profession);
  }

  void show_details() {
    cout << "Nome: " << name << endl;
    cout << "Idade: " << age << endl;
    cout << "Profissão: " << profession << endl;
  }
};

int main(int argc, char *argv[]) {
  Person person1;

  person1.register_person();
  person1.show_details();

  Person person2;

  person2.register_person();
  person2.show_details();

  return 0;
}
