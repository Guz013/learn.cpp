#include "Calculator.h"
#include <iostream>

using namespace std;

float Calculator::sum(float v1, float v2) {
  last_sum = v1 + v2;
  return last_sum;
}
float Calculator::difference(float v1, float v2) {
  last_difference = v1 - v2;
  return last_difference;
}
float Calculator::product(float v1, float v2) {
  last_product = v1 * v2;
  return last_product;
}
float Calculator::divide(float v1, float v2) {
  last_divide = v1 / v2;
  return last_divide;
}
int Calculator::square(int v) {
  last_square = v * v;
  return last_square;
}
int Calculator::cube(int v) {
  last_cube = v * v * v;
  return last_cube;
}
void Calculator::printInfo() {
  cout << "---- Métodos da calculadora: " << endl;
  cout << "Última soma: " << last_sum << endl;
  cout << "Última subtração: " << last_difference << endl;
  cout << "Última multiplicação: " << last_product << endl;
  cout << "Última divisão: " << last_divide << endl;
  cout << "Última elevação ao quadrado: " << last_square << endl;
  cout << "Última elevação ao cubo: " << last_cube << endl;
}
