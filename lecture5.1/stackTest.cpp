#include "unittest-cpp/UnitTest++/UnitTest++.h"
#include "stringStack.h"
#include "arrayStringStack.h"

using namespace std;

TEST(browser_example) {

  ASLStack* s = new ASLStack;

  s->push("google.com");

  CHECK_EQUAL(s->getSize(), 1);
  CHECK(!s->isEmpty());
  CHECK_EQUAL(s->getTop(), "google.com");

  s->push("dogblog.com");

  CHECK_EQUAL(s->getSize(), 2);
  CHECK_EQUAL(s->getTop(), "dogblog.com");

  s->push("dogblog.com/article1");

  CHECK_EQUAL(s->getSize(), 3);
  CHECK_EQUAL(s->getTop(), "dogblog.com/article1");

  string popped = s->pop();
  CHECK_EQUAL(popped, "dogblog.com/article1");
  CHECK_EQUAL(s->getTop(), "dogblog.com");

  popped = s->pop();
  CHECK_EQUAL(popped, "dogblog.com");
  CHECK_EQUAL(s->getTop(), "google.com");

  popped = s->pop();
  CHECK_EQUAL(popped, "google.com");
  CHECK(s->isEmpty());

  delete s;
  
}

int main() {
  return UnitTest::RunAllTests();
}

