#include <string>
#include <iostream>
#include <stdexcept>

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

class BST {
  private:
    BTNode* root;
  public:
    BST() { root = NULL; }
    void insert(string key, int value);
    void update(string key, int value);
    bool contains(string key);
    int find(string key);
    void remove(string key);
};

BTNode* add(BTNode* btn, string key, int value) {
  if(btn == NULL) {
    return new BTNode(key, value, NULL, NULL);
  }
  else {
    if (key > btn->key) {
      btn->right = add(btn->right, key, value);
      return btn;
    }
    else if(key < btn->key) {
      btn->left = add(btn->left, key, value);
      return btn;
    }
    else {
      throw runtime_error("Duplicate key");
    }
  }
}

void BST::insert(string key, int value) {
  root = add(root, key, value);    
}

int main() {
  BST* bst = new BST;
  bst->insert("a", 10);
  bst->insert("c", 11);
  bst->insert("b", 7);
}

int find2(BTNode* current, string key) {
  if(current == NULL) { throw runtime_error("not found"); }
  else if(current->key == key) {
    return current->value;
  }
  else if(current->key > key) {
    return find2(current->left, key);
  }
  else {
    return find2(current->right, key);
  }
}

/*
int BST::find(string key) {
  return find2(root, key);
}
*/

int BST::find(string key) {
  bool found = false;
  BTNode* currentNode = root;
  while(!found) {
    if(currentNode == NULL) { throw runtime_error("not found"); }
    if(currentNode->key == key) {
      found = true;
      return currentNode->value;
    }
    else if(currentNode->key > key) {
      currentNode = currentNode->left;
    }
    else {
      currentNode = currentNode->right;
    }
  }
  throw runtime_error("This case should not be reached");
}




















void BST::update(string key, int value) { }

bool BST::contains(string key) { return true; }

void BST::remove(string key) { }


