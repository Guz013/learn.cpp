#include "Bicycle.h"
#include "Bus.h"
#include "Car.h"
#include "Vehicle.h"

using namespace std;

int main(int argc, char *argv[]) {
  Car car1("Onix");
  Car car2("Fiesta");
  Bicycle bicycle1("Caloi");
  Bicycle bicycle2("Monarq");
  Bus bus1("Marcopolo");
  Bus bus2("Agrale");

  Vehicle *vehicles[6];
  vehicles[0] = &car1;
  vehicles[1] = &car2;
  vehicles[2] = &bicycle1;
  vehicles[3] = &bicycle2;
  vehicles[4] = &bus1;
  vehicles[5] = &bus2;

  for (Vehicle *vehicle : vehicles) {
    vehicle->move();
  }

  return 0;
}
