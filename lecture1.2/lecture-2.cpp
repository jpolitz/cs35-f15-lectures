#include<iostream>
#include<string>
using namespace std;

/*
  Return the first index in s where c appears,
    or -1 if it doesn't
*/
int find_char(string s, char c) {
  for(int i = 0; i < s.length(); i += 1) {
    if(s.at(i) == c) {
      return i;
    }
  }
  return -1;
}

int main() {

  cout << find_char("find", 'd') << " should be 3" << endl;
  cout << find_char("find_d", 'd') << " should be 3" << endl;
  cout << find_char("find", 'e') << " should be -1" << endl;

}
