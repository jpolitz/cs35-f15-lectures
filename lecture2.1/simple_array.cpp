#include <iostream>

using namespace std;

// Increment each element in the array
void incArray(int a2[], int length) {
  for(int i = length - 1; i >= 0; i--) {
    a2[i] += 1;
  }
}

int inc2(int n) {
  return n + 1;
}

void inc(int n) {
  n += 1;
}

int minArray(int a3[], int length) {
  int lowest = a3[0], i = 0;
  for(i = 0; i < length; i += 1) {
    if(a3[i] < lowest) {
      lowest = a3[i];
    }
  }
  return lowest;
}

int main() {
  int a[5];
  int b[5];

  int c[3] = { 2, 6, 7 };

  cout << "Should be 2: " << c[0] << endl;
  cout << "Should be 6: " << c[1] << endl;

  int a2d[4][5];

  string s[5];

  for(int i = 0; i < 4; i += 1) {
    for(int j = 0; j < 5; j += 1) {
      if(i == j) {
        a2d[i][j] = 1;
      }
      else {
        a2d[i][j] = 0;
      }
    }
  }

  for(int i = 0; i < 3; i++) {
    c[i] = i * 4;
  }

  int x = 0;
  inc(x);
  x = inc2(x);
  cout << "x after inc is: " << x << endl;

  incArray(c, 3);
  cout << "Should be 1: " << c[0] << endl;
  cout << "Should be 5: " << c[1] << endl;
  cout << "Should be 9: " << c[2] << endl;

/*
  a[1] = 55;

  cout << a[1] << endl;
*/
  cout << "Min is: " << minArray(a, 5) << endl;
  cout << "Min of c is: " << minArray(c, 3) << endl;

  for(int i = 0; i < 5; i += 1) {
    a[i] = i * i + 1;
    b[i] = i * i * i;
  }



/*
  for(int i = 0; i < 15; i += 1) {
//    cout << a[i] << endl;
    cout << b[i] << endl;
  }
*/
}
