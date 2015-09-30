#ifndef STRING_LIST_H
#define STRING_LIST_H

#include <string>

using namespace std;

// Interface specification
class SList {
  public:
    virtual ~SList() { };
    virtual bool isEmpty() = 0;
    virtual int getSize() = 0;
    virtual void addHead(string s) = 0;
    virtual void addTail(string s) = 0;
    virtual void removeHead() = 0;
    virtual void removeTail() = 0;
    virtual void set(int index, string s) = 0;
    virtual string get(int index) = 0;
};

#endif
