#include "posn.h"
#include <iostream>

using namespace std;

int main() {
  Posn p(4, 5.5);
  p.print();

  Posn* p2 = new Posn(3.3, 2.2);
  p2->print();
}

