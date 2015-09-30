#include <string>
#include "stringStack.h"
#include "stringList.h"
#include "arrayStringList.h"

using namespace std;

class ASLStack : public SStack {
  private:
    ASList* aslist;
  public:
    ASLStack();
    ~ASLStack();
    void push(string value);
    string pop();
    string getTop();
    int getSize();
    bool isEmpty();
};

ASLStack::~ASLStack() {
  delete aslist;
}

ASLStack::ASLStack() {
  aslist = new ASList;  
}

void ASLStack::push(string value) {
  aslist->addTail(value);
}

string ASLStack::getTop() {
  if(isEmpty()) {
    throw runtime_error("Get top of empty stack");
  }
  return aslist->get(aslist->getSize() - 1);
}

string ASLStack::pop() {
  if(isEmpty()) {
    throw runtime_error("Pop on empty stack.");
  }
  string toReturn = getTop();
  aslist->removeTail();
  return toReturn;
}

int ASLStack::getSize() {
  return aslist->getSize();
}

bool ASLStack::isEmpty() {
  return aslist->isEmpty();
}





