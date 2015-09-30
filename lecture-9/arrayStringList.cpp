#include <string>
#include <stdexcept>
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

void ASList::expandCapacity() {
  if(size == capacity) {
    string* newArrayPtr = new string[capacity * 2];
    capacity *= 2;
    for(int x = 0; x < size; x += 1) {
      newArrayPtr[x] = elements[x];
    }
    delete [] elements;
    elements = newArrayPtr;
  }
}

void ASList::addTail(string s) {
  expandCapacity();
  elements[size] = s;
  size += 1;
}

void ASList::removeTail() {
  if(isEmpty()) {
    throw runtime_error("Removing from empty list");
  }
  else {
    size -= 1;
  }
}

void ASList::removeHead() {
  if(isEmpty()) {
    throw runtime_error("Removing from empty list");
  }
  for(int i = 0; i < size - 1; i += 1) {
    elements[i] = elements[i + 1];
  }
  size -= 1;
}

void ASList::addHead(string s) {
  expandCapacity();
  for(int i = size; i > 0; i -= 1) {
    elements[i] = elements[i - 1];
  }
  elements[0] = s;
  size += 1;
}


void ASList::set(int index, string s) {
  if(index >= size) {
    throw runtime_error("Index out of range");
  }
  elements[index] = s;
}

string ASList::get(int index) {
  if(index >= size) {
    throw runtime_error("Index out of range");
  }
  return elements[index];
}


