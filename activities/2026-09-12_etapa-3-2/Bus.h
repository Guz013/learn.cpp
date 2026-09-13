#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Bus : public Vehicle {
public:
  Bus(string model);
  void move() override;
};

#endif // !BUS_H
