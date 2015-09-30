#include <iostream>
using namespace std;

bool isSorted2(int arr[], int length) {
  for(int i = 0; i < (length - 1); i++) {
    if(arr[i] > arr[i + 1]) { return false; }
  }
  return true;
}
int main() {
  int LENGTH = 4500000;
  int a[LENGTH];
  for(int i = 0; i < LENGTH; i++) {
    a[i] = i;
  }
  cout << "Should be true: " << isSorted2(a, LENGTH) << endl;
}
