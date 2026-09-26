#include <iostream>
#include <limits>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  bool running = true;

  stack<string> actions;

  while (running) {
    cout << "1 - Registrar ação" << endl;
    cout << "2 - Desfazer última ação" << endl;
    cout << "3 - Consultar última ação" << endl;
    cout << "4 - Quantidade de ações" << endl;
    cout << "0 - Sair" << endl;
    cout << endl;
    cout << "Escolha uma opção: ";

    int choice = -1;
    cin >> choice;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max());
    } else {
      cin.ignore();
    }

    cout << "----------" << endl;

    switch (choice) {
    case 0:
      cout << "Saindo do programa" << endl;
      running = false;
      break;

    case 1: {
      cout << "Digite a ação a ser registrada: ";
      string action;
      getline(cin, action);

      if (action == "") {
        cout << "Ação não pode estar vazia" << endl;
        break;
      }

      actions.push(action);
      cout << "Ação \"" << action << "\" registrada." << endl;

      break;
    }
    case 2:
      if (actions.empty()) {
        cout << "Lista de ações está vazia, nada a desfazer." << endl;
      } else {
        cout << "Desfazendo ação: \"" << actions.top() << "\"." << endl;
        actions.pop();
      }
      break;

    case 3:
      if (actions.empty()) {
        cout << "Lista de ações está vazia." << endl;
      } else {
        cout << "Última ação: \"" << actions.top() << "\"." << endl;
      }
      break;

    case 4:
      if (actions.empty()) {
        cout << "Lista de ações está vazia." << endl;
      } else {
        cout << "Número de ações: \"" << actions.size() << "\"." << endl;
      }
      break;

    default:
      cout << "AÇÃO INVALIDA" << endl;
      cout << endl;
      break;
    }

    cout << endl;
  }

  cout << "FINAL" << endl;
}
