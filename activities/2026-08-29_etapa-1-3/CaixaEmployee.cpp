#include "CaixaEmployee.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

CaixaEmployee::CaixaEmployee(string initName, string initAddress,
                             Calculator initCalculator) {
  name = initName;
  address = initAddress;
  calculator = initCalculator;
}

string CaixaEmployee::getName() { return name; }
void CaixaEmployee::setName(string v) { name = v; }

string CaixaEmployee::getAddress() { return address; }
void CaixaEmployee::setAddress(string v) { address = v; }

float CaixaEmployee::sum(float v1, float v2) { return calculator.sum(v1, v2); }

float CaixaEmployee::difference(float v1, float v2) {
  return calculator.difference(v1, v2);
}

float CaixaEmployee::product(float v1, float v2) {
  return calculator.product(v1, v2);
}

float CaixaEmployee::divide(float v1, float v2) {
  return calculator.divide(v1, v2);
}

int CaixaEmployee::cube(int v) { return calculator.cube(v); }

int CaixaEmployee::square(int v) { return calculator.square(v); }

void CaixaEmployee::printInfo() {
  cout << "--- Funcionário" << endl;
  cout << "Nome: " << name << endl;
  cout << "Endereço: " << address << endl;
  calculator.printInfo();
}
