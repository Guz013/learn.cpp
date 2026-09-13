
#include "Bus.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Bus::Bus(string initModel) : Vehicle(initModel) {}
void Bus::move() {
  cout << "Ônibus " << model << " esta andando na via exclusiva" << endl;
}
