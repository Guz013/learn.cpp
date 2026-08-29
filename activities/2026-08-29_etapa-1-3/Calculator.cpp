#include "Calculator.h"
#include <iostream>

using namespace std;

float Calculator::sum(float v1, float v2) { return v1 + v2; }
float Calculator::difference(float v1, float v2) { return v1 - v2; }
float Calculator::product(float v1, float v2) { return v1 * v2; }
float Calculator::divide(float v1, float v2) { return v1 / v2; }
int Calculator::square(int v) { return v * v; }
int Calculator::cube(int v) { return v * v * v; }
void Calculator::printInfo() {
  cout << "---- Métodos da calculadora: " << endl;
  cout << "Soma: sum()" << endl;
  cout << "Subtração: difference()" << endl;
  cout << "Multiplicação: product()" << endl;
  cout << "Divisão: divide()" << endl;
  cout << "Elevação ao quadrado: square()" << endl;
  cout << "Elevação ao cubo: cube()" << endl;
}
