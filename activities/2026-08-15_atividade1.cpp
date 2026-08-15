// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  int age;
  string profession;

  cout << "Nome: ";
  getline(cin, name);
  cout << "Nome: " << name << endl;

  cout << "Idade: ";
  cin >> age;
  cin.ignore();
  cout << "Idade: " << age << endl;

  cout << "Profissão: ";
  getline(cin, profession);
  cout << "Profissão: " << profession << endl;

  return 0;
}
