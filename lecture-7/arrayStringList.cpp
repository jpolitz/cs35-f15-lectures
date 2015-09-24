#include <string>
#include <iostream>
#include "stringList.h"
#include "arrayStringList.h"

using namespace std;

ASList::ASList() {
  size = 0;
  capacity = 2;
  elements = new string[capacity];
}

ASList::~ASList() {
  delete [] elements;
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

void ASList::expandCapacity() {
  if(size == capacity) {
    string* newArrayPtr = new string[capacity + 1];
    capacity += 1;
    for(int x = 0; x < size; x += 1) {
      newArrayPtr[x] = elements[x];
    }
    delete [] elements;
    // elements[0]
    elements = newArrayPtr;
  }
}

void ASList::addTail(string s) {
  expandCapacity();
  elements[size] = s;
  size += 1;
}

void ASList::set(int index, string s) { }

void ASList::addHead(string s) {
  expandCapacity();
  for(int i = size; i > 0; i -= 1) {
    elements[i] = elements[i - 1];
  }
  elements[0] = s;
  size += 1;
}


