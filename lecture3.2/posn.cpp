#include "posn.h"
#include <iostream>

using namespace std;

// _Definitions_ for the Posn class

Posn::Posn() {
  x = 0;
  y = 0;
}

Posn::Posn(float xVal, float yVal) {
  x = xVal;
  y = yVal;
}

void Posn::print() {
  cout << "(" << x << ", " << y << ")" << endl;
}

void Posn::print2() {
  float x = 0;
  cout << "(" << x << ", " << y << ")" << endl;
}






Posn::~Posn() {
  // nothing
}






