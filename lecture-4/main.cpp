#include "posn.h"
#include <iostream>

using namespace std;

Posn* makePosn() {
  Posn* p = new Posn(4, 5);
  return p;
}

void updateX(Posn* p, float newX) {
  p->x = newX;
}

int main() {
  Posn p;
  Posn p2(4, 5.5);

  p.print();

  Posn* p3 = new Posn(3, 4);

  p3->print();

/*
  Posn* delete_this;

  while(true) {
    delete_this = makePosn();
    delete delete_this;
  }
*/

  /*

  cout << p3->x << endl;
  
  updateX(p3, 14);

  cout << p3->x << endl;

  delete p3;

  */
}

