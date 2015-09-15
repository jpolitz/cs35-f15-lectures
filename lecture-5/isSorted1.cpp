#include <iostream>
using namespace std;

bool isSorted1(int arr[], int length) {
  for(int i = 0; i < length; i++) {
    for(int j = i; j < length; j++) {
      if(arr[j] < arr[i]) { return false; }
    }
  }
  return true;
}
int main() {
  int LENGTH = 70000;
  int a[LENGTH];
  for(int i = 0; i < LENGTH; i++) {
    a[i] = i;
  }
  cout << "Should be true: " << isSorted1(a, LENGTH) << endl;
}
