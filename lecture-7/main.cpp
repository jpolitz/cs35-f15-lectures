#include "unittest-cpp/UnitTest++/UnitTest++.h"
#include "stringList.h"
#include "arrayStringList.h"

using namespace std;

TEST(a_test) {
  ASList* mylist = new ASList;

  CHECK_EQUAL(0, mylist->getSize());
  CHECK(mylist->isEmpty());

  mylist->addTail("a");

  CHECK_EQUAL(1, mylist->getSize());
  CHECK(!(mylist->isEmpty()));

  CHECK_EQUAL("a", mylist->get(0));

  mylist->addTail("b");
  mylist->addTail("c");

  // here

  CHECK_EQUAL("b", mylist->get(1));
  CHECK_EQUAL("c", mylist->get(2));
  CHECK_EQUAL(3, mylist->getSize());

  mylist->addHead("d");
  CHECK_EQUAL(4, mylist->getSize());
  CHECK_EQUAL("a", mylist->get(1));
  CHECK_EQUAL("b", mylist->get(2));
  CHECK_EQUAL("c", mylist->get(3));
  CHECK_EQUAL("d", mylist->get(0));

  // here

  mylist->set(3, "f");
  CHECK_EQUAL("d", mylist->get(0));
  CHECK_EQUAL("a", mylist->get(1));
  CHECK_EQUAL("b", mylist->get(2));
  CHECK_EQUAL("f", mylist->get(3));

  CHECK_THROW(mylist->get(55), runtime_error);

  delete mylist;
}

int main() {
  return UnitTest::RunAllTests();
}
