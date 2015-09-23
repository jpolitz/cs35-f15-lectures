#include <iostream>

using namespace std;

int main() {
  int SIZE = 22;
  int* ints = new int[SIZE];
  
  ints[0] = 77;
  cout << ints[0] << endl;
  cout << ints[1] << endl;
  cout << ints[23] << endl;
}
