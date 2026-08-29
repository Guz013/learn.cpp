#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
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
