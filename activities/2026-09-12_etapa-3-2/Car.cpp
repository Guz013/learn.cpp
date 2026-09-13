#include "Car.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

Car::Car(string initModel) : Vehicle(initModel) {}
void Car::move() {
  cout << "Carro " << model << " esta se movimentando pela estrada." << endl;
}
