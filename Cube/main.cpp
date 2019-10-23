#include <iostream>
#include "cube.h"

using namespace std;
int main() {
  std::cout << "Hello World!\n" <<endl;

  Cube c;
  c.setLen(4);

  cout << c.getSA() <<endl;
  cout << c.getVol() <<endl;

}