#include <string>
#include "stringList.h"
#include "arrayStringList.h"

using namespace std;

ASList::ASList() {
  size = 0;
  capacity = 2;
  elements = new string[capacity];
}

int ASList::getSize() {
  return size;
}

bool ASList::isEmpty() {
  return (size == 0);
}

string ASList::get(int index) {
  return elements[index];
}

void ASList::addTail(string s) {
  if(size == capacity) {
    string* newArrayPtr = new string[capacity + 1];
    capacity += 1;
    for(int x = 0; x < size; x += 1) {
      newArrayPtr[x] = elements[x];
    }
    elements = newArrayPtr;
    // TODO: delete
  }
  elements[size] = s;
  size += 1;
}

void ASList::set(int index, string s) { }
void ASList::addHead(string s) { }

