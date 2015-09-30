#ifndef _SSTACK_H_
#define _SSTACK_H_
#include <string>

using namespace std;

class SStack {
  public:
    virtual ~SStack() { };
    virtual void push(string value) = 0;
    virtual string pop() = 0;
    virtual string getTop() = 0;
    virtual int getSize() = 0;
    virtual bool isEmpty() = 0;
};
#endif
