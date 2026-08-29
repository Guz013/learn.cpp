#include <iostream>
using namespace std;

void changeValue(int &num) { num *= 2; }

int main(int argc, char *argv[]) {
  int value = 10;

  changeValue(value);

  cout << value << endl;

  return 0;
}
