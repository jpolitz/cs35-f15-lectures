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

Posn::~Posn() {
  // nothing
}

void Posn::print() {
  cout << "(" << x << ", " << y << ")" << endl;
}








