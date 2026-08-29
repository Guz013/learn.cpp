#ifndef COMPANY_H
#define COMPANY_H

#include "CaixaEmployee.h"
#include <string>
#include <vector>
using namespace std;

class Company {
private:
  string name;
  vector<CaixaEmployee> employees;

public:
  Company(string name);

  string getName();
  void setName(string v);

  vector<CaixaEmployee> listEmployees();
  void addEmployee(CaixaEmployee e);

  void printInfo();
};

#endif // !COMPANY_H
