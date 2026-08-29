// Compilado em clang++ -std=C++23 e rodado em Linux

#include <iostream>

using namespace std;

class Rectangle {
public:
  // Comentário: Usar getter e setters para height e width é redundante, pois
  // não há nenhuma computação necessária quando seus valores são mudados. E
  // deixar seus valore públicos não quebra ou expôe nada "interno de um
  // retângulo".

  float height;
  float width;

  Rectangle(float h, float w) {
    height = h;
    width = w;
  }

  float area() { return height * width; }
};

int main(int argc, char *argv[]) {
  Rectangle rect(1920, 1080);

  cout << "Altura: " << rect.height << endl;
  cout << "Largura: " << rect.width << endl;
  cout << "Area: " << rect.area() << endl;

  rect.height = 10;
  rect.width = 20;

  cout << "Altura: " << rect.height << endl;
  cout << "Largura: " << rect.width << endl;
  cout << "Area: " << rect.area() << endl;

  return 0;
}
