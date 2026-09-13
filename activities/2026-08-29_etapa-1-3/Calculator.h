#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
  float last_sum = 0;
  float last_difference = 0;
  float last_product = 0;
  float last_divide = 0;
  int last_square = 0;
  int last_cube = 0;

public:
  float sum(float v1, float v2);
  float difference(float v1, float v2);
  float product(float v1, float v2);
  float divide(float v1, float v2);
  int square(int v);
  int cube(int v);
  void printInfo();
};

#endif // CALCULATOR_H
