#include "Bicycle.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Bicycle::Bicycle(string initModel) : Vehicle(initModel) {}
void Bicycle::move() {
  cout << "Bicicleta " << model << " esta se movimentando pela ciclovia."
       << endl;
}
