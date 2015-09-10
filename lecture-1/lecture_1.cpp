#include<string>
#include<iostream>

using namespace std;

int main(){
  string helloWorld;

  helloWorld = "hello world!";

  cout << helloWorld;

  int x = 3, y = 5;
  bool b;

  cout << "Enter a bool: ";

  cin  >> b;
  cout << b << endl;

  cout << "x + y = " << x + y << endl;
  cout << "x * y = " << x * y << endl;
  cout << "x / y = " << x / y << endl;
  cout << "y \% x = " << y % x << endl;

  x = 10;

  cout << "x * y = " << x * y << endl;

  x += 1;

  cout << "x * y = " << x * y << endl;

  float f1 = 1.0, f2 = 2.0;

  cout << "f1 / f2 = " << f1 / f2 << endl;

  cout << "f1 / f2 = ";
  cout << f1 / f2;
  cout << endl;

  // cout.send("f1 / f2 = ");

  string rest_of_stuff;

  cout << "New x value: ";

  cin >> x;
//  cin >> rest_of_stuff;

  //cin >> x;
  //cin >> rest_of_stuff;

  // x = raw_input("Give me an x")

  cout << "X is now: " << x << endl;
//  cout << "Rest of stuff was: " << rest_of_stuff << endl;

  // if x > 10:
  //    

  if(x < 10) {
    cout << "X was smallish" << endl;
  }
  else if(x > 100) {
    cout << "X was really big" << endl;
  }
  else {
    cout << "X was largish" << endl;
  }



}
