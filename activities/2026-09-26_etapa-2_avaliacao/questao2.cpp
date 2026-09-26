#include <iostream>
#include <limits>
#include <queue>
#include <string>

using namespace std;

class Client {
private:
  string name;
  int number;

public:
  Client(string n, int num) {
    name = n;
    number = num;
  }
  string getName() { return name; }
  int getNumber() { return number; }
};

int main(int argc, char *argv[]) {
  bool running = true;

  queue<Client> queue;

  while (running) {
    cout << "1 - Adicionar cliente" << endl;
    cout << "2 - Atender próximo cliente" << endl;
    cout << "3 - Consultar próximo cliente" << endl;
    cout << "4 - Quantidade de clientes aguardando" << endl;
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
      cout << "Digite o nome do cliente: ";
      string name;
      getline(cin, name);

      if (name == "") {
        cout << "Nome não pode estar vazio" << endl;
        break;
      }

      cout << "Digite o número de atendimento do cliente: ";
      int number;
      cin >> number;
      if (cin.fail()) {
        cout << "Número tem que ser válido" << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());

        break;
      } else {
        cin.ignore();
      }

      if (number < 0) {
        cout << "Número de atendimento não pode ser negativo" << endl;
        break;
      }

      Client client(name, number);
      queue.push(client);

      cout << "Cliente: \"" << client.getName()
           << "\" com número de atendimento " << client.getNumber()
           << " adicionado na fila." << endl;

      break;
    }
    case 2:
      if (queue.empty()) {
        cout << "Fila de clientes está vazia, nenhum à atender." << endl;
      } else {
        Client client = queue.front();
        cout << "Atendendo cliente: \"" << client.getName()
             << "\" com número de atendimento " << client.getNumber() << "."
             << endl;
        queue.pop();
      }
      break;

    case 3:
      if (queue.empty()) {
        cout << "Fila de clientes está vazia." << endl;
      } else {
        Client client = queue.front();
        cout << "Próximo cliente: \"" << client.getName()
             << "\" com número de atendimento " << client.getNumber() << "."
             << endl;
      }
      break;

    case 4:
      if (queue.empty()) {
        cout << "Fila de clientes está vazia." << endl;
      } else {
        cout << "Número de clientes esperando: \"" << queue.size() << "\"."
             << endl;
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
