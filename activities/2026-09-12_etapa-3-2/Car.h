#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {
public:
  Car(string model);
  void move() override;
};

#endif // !CAR_H
