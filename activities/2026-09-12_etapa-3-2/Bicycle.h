#ifndef BICYCLE_H
#define BICYCLE_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Bicycle : public Vehicle {
public:
  Bicycle(string model);
  void move() override;
};

#endif // !BICYCLE_H
