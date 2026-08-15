#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  string name;

  cout << "Nome: ";
  cin >> name;

  int age;
  cout << "Idade: ";
  cin >> age;

  int semester;
  cout << "Semestre: ";
  cin >> semester;

  int notas[5];
  for (int i = 0; i < 5; i++) {
    cout << "Coloque a nota da matéria " << i + 1 << " (entre 0 e 10): ";
    cin >> notas[i];
  }

  cout << name << " tem " << age << " anos." << endl;
  cout << "Esta no semestre n. " << semester << endl;

  int avarage = 0;
  for (int i = 0; i < 5; i++) {
    avarage += notas[i];
  }
  cout << "Média: " << avarage / 5 << endl;

  return 0;
}
