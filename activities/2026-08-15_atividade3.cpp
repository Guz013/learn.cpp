// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>
#include <string>

using namespace std;

class Car {
private:
  int velocity = 0;
  bool running = false;

public:
  string model;
  string brand;

  void turn_on() {
    cout << "Carro ligado" << endl;
    running = true;
  }
  void turn_off() {
    cout << "Carro desligado" << endl;
    running = false;
  }
  void accelerate() {
    if (!running) {
      return;
    }
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
  void print_velocity() { cout << velocity << " km/h" << endl; }
};

int main(int argc, char *argv[]) {
  Car car;
  car.brand = "Toyota";
  car.model = "Corolla";
  car.turn_on();

  car.accelerate();
  car.accelerate();

  car.print_velocity();

  car.slow_down();

  car.print_velocity();

  car.turn_off();

  return 0;
}
