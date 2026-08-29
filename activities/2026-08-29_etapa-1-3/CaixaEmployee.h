#ifndef CAIXAEMPLOYEE_H
#define CAIXAEMPLOYEE_H

#include "Calculator.h"
#include <string>
using namespace std;

class CaixaEmployee {
private:
  string name;
  string address;
  Calculator calculator;

public:
  CaixaEmployee(string initName, string initAddress, Calculator initCalculator);

  string getName();
  void setName(string v);

  string getAddress();
  void setAddress(string v);

  float sum(float v1, float v2);
  float difference(float v1, float v2);
  float product(float v1, float v2);
  float divide(float v1, float v2);
  int square(int v);
  int cube(int v);
  void printInfo();
};

#endif // !CAIXAEMPLOYEE_H
