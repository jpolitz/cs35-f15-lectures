#include <string>
#include "stringList.h"

class LSNode {
  public:
    string value;
    LSNode* next;
    
    LSNode(string value, LSNode* next);
    ~LSNode();
};

LSNode::LSNode(string _value, LSNode* _next) {
  value = _value;
  next = _next;
}

class LSList : public SList {
  private:
    LSNode* head;
  public:
    LSList();
    ~LSList();
    bool isEmpty();
    int getSize();
    void addHead(string s);
    void addTail(string s);
    void set(int index, string s);
    string get(int index);
};

LSList::LSList() {
  head = NULL;
}

LSList::~LSList() { }

bool LSList::isEmpty() { return (head == NULL); }
int LSList::getSize() {
  if(isEmpty()) { return 0; }
  else {
    LSNode* current = head;
    int i = 0;
    while(current != NULL) {
      current = current->next;
      i += 1;
    }
    return i;
  }
}
void LSList::addHead(string s) {
  LSNode* newNode = new LSNode(s, head);
  head = newNode;
}
void LSList::addTail(string s) {
  if(isEmpty()) {
    LSNode* newNode = new LSNode(s, head);
    head = newNode;
  }
  else {
    LSNode* current = head;
    while(current->next != NULL) {
      current = current->next;
    }
    // Now current is the element before NULL
    LSNode* newNode = new LSNode(s, NULL);
    current->next = newNode;
  }
}

string LSList::get(int index) {
  if(isEmpty()) {
    return "FAIL1";
  }
  else {
    LSNode* current = head;
    while(current != NULL) {
      if(index == 0) {
        return current->value;
      }
      current = current->next;
      index -= 1;
    }
    // What about if current == NULL?
  }
  return "FAIL2";
}

void LSList::set(int index, string s) {
  // TODO
}

