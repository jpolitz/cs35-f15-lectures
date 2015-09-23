#include <string>
#include "stringList.h"

using namespace std;

class ASList : public SList {
  private:
    int size;
    // How many elements currently stored
    int capacity;
    // How many elements could fit before making a bigger array
    string* elements;
  public:
    ASList();
    bool isEmpty();
    int getSize();
    void addHead(string s);
    void addTail(string s);
    void set(int index, string s);
    string get(int index);
};


