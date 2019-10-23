#include "Cube.h"

namespace sabuj{
void Cube::set(int l){
  len = l;
}

int Cube::vol(){
  return len*len*len;
}
}