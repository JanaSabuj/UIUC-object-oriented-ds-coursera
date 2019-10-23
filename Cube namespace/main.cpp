#include <iostream>
#include "Cube.h"
using namespace std;
// using namespace sabuj;

int main() {
  std::cout << "Hello World!\n";

  sabuj::Cube c; // my cube labelled by my namespace
  c.set(2);

  cout << c.vol() <<endl;

}