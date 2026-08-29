#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int num = 10;

  int *pointer = &num;
  int &ref = num;

  cout << "number: " << num << endl;
  cout << "pointer: " << pointer << endl; // The address in memory
  cout << "*pointer: " << *pointer
       << endl; // The value inside that memory address
  cout << "ref: " << ref << endl;

  ref = 50;

  cout << "number: " << num << endl;

  return 0;
}
