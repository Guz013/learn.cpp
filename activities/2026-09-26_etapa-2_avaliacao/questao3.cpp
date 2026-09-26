#include <cstddef>
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

class Product {
private:
  string code;
  string name;
  double price;

public:
  Product(string cod, string nam, double pric) {
    code = cod;
    name = nam;
    price = pric;
  }

  string getCode() { return code; }
  void setCode(int v) { code = v; }
  string getName() { return name; }
  void setName(string v) { name = v; }
  double getPrice() { return price; }
  void setPrice(float v) { price = v; }

  void printData() {
    cout << "Código: " << code << endl;
    cout << "Produto: " << name << endl;
    cout << "Preço: R$ " << fixed << setprecision(2) << price << endl;
  }
};

template <typename T> class Node {
public:
  T value;
  Node<T> *next;

  Node(T v) : value(v) {}
};

class ProductList {
private:
  Node<Product> *first = nullptr;
  Node<Product> *last = nullptr;

public:
  void push(Product product) {
    Node<Product> *n = new Node<Product>(product);

    if (first == nullptr) {
      first = n;
      for (Node<Product> *node = first; node != nullptr; node = node->next) {
        last = node;
      }
      if (last == nullptr) {
        last = n;
      }
      return;
    }

    last->next = n;
    last = n;
  }

  void printFindByCode(string code) {
    for (Node<Product> *node = first; node != nullptr; node = node->next) {
      if (node->value.getCode() == code) {
        cout << "Produto achado: " << endl;
        node->value.printData();
        return;
      }
    }
    cout << "Nenhum produto com código " << code << " achado." << endl;
  }

  bool empty() { return first == nullptr; }

  void printList() {
    if (empty()) {
      cout << "Lista de produto está limpa." << endl;
      return;
    }

    int quantity = 0;
    for (Node<Product> *node = first; node != nullptr; node = node->next) {
      quantity++;
      cout << "Produto " << quantity << ":" << endl;
      node->value.printData();
      cout << endl;
    }
    cout << "Há " << quantity << " produtos no sistema" << endl;
  }
};

int main(int argc, char *argv[]) {
  bool running = true;

  ProductList list;

  while (running) {
    cout << "1 - Cadastrar produto" << endl;
    cout << "2 - Listar produtos" << endl;
    cout << "3 - Buscar produto por código" << endl;
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
      cout << "Preencha os campos abaixo:" << endl;

      cout << "Código do produto: ";
      string code;
      getline(cin, code);

      if (code == "") {
        cout << "Código não pode estar vazio" << endl;
        break;
      }

      cout << "Nome do produto: ";
      string name;
      getline(cin, name);

      if (name == "") {
        cout << "Nome não pode estar vazio" << endl;
        break;
      }

      cout << "Digite o preço: ";
      double price;
      cin >> price;
      if (cin.fail()) {
        cout << "Número tem que ser válido" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max());
        break;
      } else {
        cin.ignore();
      }

      if (price < 0) {
        cout << "Número de atendimento não pode ser negativo" << endl;
        break;
      }

      Product p(code, name, price);
      list.push(p);

      cout << "Produto " << p.getCode() << " registrado." << endl;
      break;
    }
    case 2:
      list.printList();
      break;

    case 3: {
      cout << "Código do produto: ";
      string code;
      getline(cin, code);

      if (code == "") {
        cout << "Código não pode estar vazio" << endl;
        break;
      }

      list.printFindByCode(code);
      break;
    }
    default:
      cout << "AÇÃO INVALIDA" << endl;
      cout << endl;
      break;
    }

    cout << endl;
  }

  cout << "FINAL" << endl;
}
