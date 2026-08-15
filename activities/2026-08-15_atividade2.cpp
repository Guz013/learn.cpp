// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
  string name;
  int age;
  string profession;

  void print_info() {
    cout << "Nome: " << name << endl;
    cout << "Idade: " << age << endl;
    cout << "Profissão: " << profession << endl;
  }
};

int main() {
  Student student;

  cout << "Nome: ";
  getline(cin, student.name);

  cout << "Idade: ";
  cin >> student.age;
  cin.ignore();

  cout << "Profissão: ";
  getline(cin, student.profession);

  student.print_info();

  return 0;
}
