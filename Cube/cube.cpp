#include "cube.h"

void Cube::setLen(int l){
  len_ = l;
}

int Cube::getVol(){
  return len_*len_*len_;
}

int Cube::getSA(){
  return 6 * len_ * len_;
}