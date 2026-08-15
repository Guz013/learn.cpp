// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>
#include <string>

using namespace std;

class Product {
private:
  int productQuantity = 0;

public:
  string name;
  int price;

  void add_to_storage(int quantity) {
    if (quantity < 0) {
      cout << "Operação não permitida" << endl;
      return;
    }
    productQuantity += quantity;
  }
  void remove_from_storage(int quantity) {
    if (quantity > productQuantity || quantity < 0) {
      cout << "Operação não permitida" << endl;
      return;
    }
    productQuantity -= quantity;
  }
  void print_info() {
    cout << "Nome do produto: " << name << endl;
    cout << "Preço do produto: R$" << price << endl;
    cout << "Quantidade em estoque: " << productQuantity << endl;
  }
};

int main() {
  Product produt1;
  produt1.name = "Monster";
  produt1.price = 14;

  produt1.add_to_storage(5);
  produt1.remove_from_storage(2);
  produt1.add_to_storage(3);

  produt1.print_info();

  Product produt2;
  produt2.name = "Coffe Queimado";
  produt2.price = 7;

  produt2.add_to_storage(10);
  produt2.remove_from_storage(20);
  produt2.remove_from_storage(5);

  produt2.print_info();

  return 0;
}
