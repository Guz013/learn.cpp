#include <iostream>
#include <string>

using namespace std;

class Car {
private:
  int velocity = 0;

public:
  string model;
  string brand;

  Car(string car_model, string car_brand) {
    model = car_model;
    brand = car_brand;
  }

  void accelerate() {
    velocity += 10;
    if (velocity > 220) {
      velocity = 220;
    }
  }
  void slow_down() {
    velocity -= 10;
    if (velocity < 0) {
      velocity = 0;
    }
  }
  int get_velocity() { return velocity; }
};

int main(int argc, char *argv[]) {
  Car car1("corolla", "toyota");
  Car car2("corolla", "toyota");

  cout << car1.get_velocity() << " km/h" << endl;
  cout << car2.get_velocity() << " km/h" << endl;

  car1.accelerate();
  car1.accelerate();

  car2.accelerate();

  cout << car1.get_velocity() << " km/h" << endl;
  cout << car2.get_velocity() << " km/h" << endl;

  return 0;
}
