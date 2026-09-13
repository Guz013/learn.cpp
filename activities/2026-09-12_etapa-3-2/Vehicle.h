#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

using namespace std;

class Vehicle {
protected:
  string model;

public:
  Vehicle(string model);

  virtual void move();

  ~Vehicle();
};

#endif // !VEHICLE_H
