
#include "Company.h"
#include "CaixaEmployee.h"
#include <iostream>
#include <vector>

using namespace std;

Company::Company(string initName) { name = initName; }

vector<CaixaEmployee> Company::listEmployees() { return employees; }
void Company::addEmployee(CaixaEmployee e) { employees.push_back(e); }

void Company::printInfo() {
  cout << "-- Empresa" << endl;
  cout << "Nome: " << name << endl;

  for (CaixaEmployee e : employees) {
    e.printInfo();
  }
}
