#include <iostream>
#include <iostream>
#include "posn.h"

using namespace std;

int main() {
  Posn p(5, 20);
  p.print();

  Posn* p2 = new Posn(5, 55);

  (*p2).print();
  p2->print();

  Posn* posns[3];
  posns[0] = new Posn(25, 19);
  posns[1] = new Posn(22, 20);

  cout << "\nThe posns:\n";
  // error, posns[0] is Posn*, not Posn
  posns[0]->print();
  posns[1]->print();
  (*posns[1]).print();
  posns[2]->print();
  (*posns[2]).print();

  delete p2;
  delete posns[0];
  delete posns[1];

  return 0;
}


