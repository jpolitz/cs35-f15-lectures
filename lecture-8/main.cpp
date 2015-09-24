#include "unittest-cpp/UnitTest++/UnitTest++.h"
#include "stringList.h"
#include "linkedStringList.h"

using namespace std;

TEST(a_test) {
  LSList* mylist = new LSList;

  CHECK_EQUAL(0, mylist->getSize());
  CHECK(mylist->isEmpty());

  mylist->addTail("a");

  CHECK_EQUAL(1, mylist->getSize());
  CHECK(!(mylist->isEmpty()));

  CHECK_EQUAL("a", mylist->get(0));

  mylist->addTail("b");
  mylist->addTail("c");

  CHECK_EQUAL("b", mylist->get(1));
  CHECK_EQUAL("c", mylist->get(2));
  CHECK_EQUAL(3, mylist->getSize());

  delete mylist;
}

int main() {
  return UnitTest::RunAllTests();
}
