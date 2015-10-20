#include <string>
#include <iostream>

using namespace std;

class BTNode {
  public:
    string key;
    int value;
    BTNode* left;
    BTNode* right;
    BTNode(string _key, int _value, BTNode* _left, BTNode* _right) {
      key = _key;
      value = _value;
      left = _left;
      right = _right;
    }
};


bool allLess(BTNode* btn, string key) {
  if(btn == NULL) { return true; }
  else {
    bool keyOK = btn->key < key;
    bool leftOK = allLess(btn->left, key);
    bool rightOK = allLess(btn->right, key);
    return keyOK && leftOK && rightOK;
  }
}

bool allGreater(BTNode* btn, string key) {
  if(btn == NULL) { return true; }
  else {
    bool keyOK = btn->key > key;
    bool leftOK = allGreater(btn->left, key);
    bool rightOK = allGreater(btn->right, key);
    return keyOK && leftOK && rightOK;
  }
}

// Returns true if:
//  1. everything on the left of btn is smaller than btn's key,
//  2. everything to the right is larger than btn's key,
//  3. btn->left and btn->right also satisfy isOrderedBTNode
bool isOrderedBTNode(BTNode* btn) {
  if(btn == NULL) { return true; }
  else {
    bool leftOrdered = isOrderedBTNode(btn->left);
    bool rightOrdered = isOrderedBTNode(btn->right);
    bool leftLess = allLess(btn->left, btn->key);
    bool rightGreater = allGreater(btn->right, btn->key);
    return leftOrdered && rightOrdered && leftLess && rightGreater;
  }
}


int main() {
  BTNode* btn1 = new BTNode("dog", 2,
      new BTNode("dad", 3,
        new BTNode("cat", 7, NULL, NULL),
        new BTNode("dan", 6, NULL, NULL)),
      new BTNode("mom", 4,
        new BTNode("liz", 1, NULL, NULL),
        new BTNode("zed", 9, NULL, NULL)));

  BTNode* btn2 = new BTNode("dog", 2,
      new BTNode("dad", 3,
        new BTNode("dan", 6, NULL, NULL),
        new BTNode("cat", 7, NULL, NULL)),
      new BTNode("mom", 4,
        new BTNode("liz", 1, NULL, NULL),
        new BTNode("zed", 9, NULL, NULL)));

  BTNode* btn3 = new BTNode("dog", 2,
      new BTNode("dad", 3,
        new BTNode("dan", 6, NULL, new BTNode("liz", 1, NULL, NULL)),
        new BTNode("cat", 7, NULL, NULL)),
      new BTNode("mom", 4,
        NULL,
        new BTNode("zed", 9, NULL, NULL)));

  cout << "Should be true (1): " << isOrderedBTNode(btn1) << endl;
  cout << "Should be false (0): " << isOrderedBTNode(btn2) << endl;
  cout << "Should be false (0): " << isOrderedBTNode(btn3) << endl;
}
