// Compilado em clang++ -std=C++23 e rodado em Linux

#include "CaixaEmployee.h"
#include "Calculator.h"
#include "Company.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  Calculator calculator1;
  CaixaEmployee employee1("Guz", "Rio Grande do Sul", calculator1);

  Calculator calculator2;
  CaixaEmployee employee2("Kei", "São Paulo", calculator2);

  cout << "Calculos do primerio funcionário:" << endl;
  cout << "2+2 = " << employee1.sum(2, 2) << endl;
  cout << "5-4 = " << employee1.difference(5, 4) << endl;
  cout << "2*3 = " << employee1.product(2, 3) << endl;
  cout << "2^2 = " << employee1.square(2) << endl;

  cout << "Calculos do segundo funcionário:" << endl;
  cout << "6/3 = " << employee2.divide(6, 3) << endl;
  cout << "7+2 = " << employee2.sum(7, 2) << endl;
  cout << "8x3 = " << employee2.product(8, 3) << endl;
  cout << "3^3 = " << employee2.cube(3) << endl;

  Company company("Caixa");

  company.addEmployee(employee1);
  company.addEmployee(employee2);

  company.printInfo();

  return 0;
}
