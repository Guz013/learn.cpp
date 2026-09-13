#include "Delivery.h"
#include "Request.h"
#include <iomanip>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

  cout << "Digite seu nome: ";
  string name = "";
  getline(cin, name);

  if (name == "") {
    cout << "ERRO: Nome não pode estar vazio." << endl;
    return 1;
  }

  cout << "Digite o valor da compra: ";
  double price = 0;
  cin >> price;

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max());
  }

  if (price < 0) {
    cout << "ERRO: Preço da compra não pode ser negativo." << endl;
    return 1;
  }

  cout << "Digite a distância até seu endereço (em KM): ";
  double distance = 0;
  cin >> distance;

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max());
  }

  if (distance < 0) {
    cout << "ERRO: Distância não pode ser negativo." << endl;
    return 1;
  }

  Request request(name, price);

  cout << "" << endl;
  cout << "Modelos de retirada ---------" << endl;
  cout << "1 - Retirada na loja" << endl;
  cout << "2 - Entrega normal" << endl;
  cout << "3 - Entrega expressa" << endl;
  if (distance <= 20) {
    cout << "4 - Entrega via motoboy" << endl;
  } else {
    cout << "Entrega via motoboy indísponivel" << endl;
  }
  cout << "" << endl;
  cout << "Escolha o modelo de retirada: ";

  int choice = 0;
  cin >> choice;

  if (cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max());
  }

  Delivery *delivery;

  switch (choice) {
  case 1: {
    delivery = new InPersonDelivery(distance);
    break;
  }
  case 2: {
    delivery = new NormalDelivery(distance);
    break;
  }
  case 3: {
    delivery = new ExpressDelivery(distance);
    break;
  }
  case 4: {
    if (distance <= 20) {
      delivery = new MotoboyDelivery(distance);
    } else {
      cout << "ERRO: Entrega via motoboy apenas disponível para entregas "
              "abaixo de 20km de distância!"
           << endl;
    }
    break;
  }
  default:
    cout << "ERRO: Escolha de entrega deve ser uma das listadas acima." << endl;
    return 1;
  }

  double deliveryFee = delivery->calculateFee();
  delivery->showTime();

  cout << "" << endl;
  cout << "Digite um cupom de desconto (caso tenha): ";
  string cupom = "";
  cin >> cupom;

  if (cupom == "DESCONTO10") {
    request.setPrice(request.getPrice() - (request.getPrice() * 0.10));
  } else if (cupom != "") {
    cout << "Cupom " << cupom << " invalido!" << endl;
  }

  double total = request.getPrice() + deliveryFee;

  if (request.getPrice() > 500 && choice == 2) {
    total = request.getPrice();
    deliveryFee = 0;
    cout << "" << endl;
    cout << "Compra acima de R$500, frete grátis aplicado!" << endl;
  }

  cout << "" << endl;
  cout << "Resumo da compra ------------" << endl;
  cout << "Cliente: " << request.getClient() << endl;
  cout << "Forma de entrega: " << delivery->getName() << endl;
  cout << "" << endl;
  cout << "Valor da compra: R$ " << fixed << setprecision(2)
       << request.getPrice() << endl;
  cout << "Frete: R$ " << deliveryFee << endl;
  cout << "Total: R$ " << total << endl;
  cout << "" << endl;
  delivery->showTime();

  return 0;
}
