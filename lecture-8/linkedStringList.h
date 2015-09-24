#include <string>
#include "stringList.h"

class Node {
  public:
    string value;
    Node* next;

    Node(string _value, Node* _next);
    ~Node();
};

Node::Node(string _value, Node* _next) {
  value = _value;
  next = _next;
}

Node::~Node() {

}

class NSList : public SList {
  private:
    Node* front;
  public:
    NSList();
    ~NSList();
    bool isEmpty();
    int getSize();
    void addHead(string s);
    void addTail(string s);
    void set(int index, string s);
    string get(int index);
};

NSList::NSList() {
  front = NULL;
}

NSList::~NSList() {

}

bool NSList::isEmpty() {
  return (front == NULL);
}

string NSList::getFirst() {
  return front->value;
}

int NSList::getSize() {
  // TODO
}

void NSList::addHead(string s) {
  Node* nodeToAdd = new Node(s, front);
  front = nodeToAdd;
}







