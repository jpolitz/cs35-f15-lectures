#include <string>
#include <iostream>

using namespace std;

/**
  merge -- combine two sorted arrays into a new sorted array

  a1 and a2 are _sorted_ lists of strings
  l1 and l2 are the lengths of a1 and a2, respectively

  returns a newly-allocated array of strings containing the combined array
*/
string* merge(string* a1, int l1, string* a2, int l2) {
  string* newArray = new string[l1 + l2];
  int i = 0, j = 0, k = 0;
  while((i < l1) && (j < l2)) {
    if(a1[i] < a2[j]) {
      newArray[k] = a1[i];
      i += 1;
      k += 1;
    }
    else {
      newArray[k] = a2[j];
      j += 1;
      k += 1;
    }
  }
  while(i < l1) {
    newArray[k] = a1[i];
    i += 1;
    k += 1;
  }
  while(j < l2) {
    newArray[k] = a2[j];
    j += 1;
    k += 1;
  }
  return newArray;
}

/**
  slice -- similar to a[start:end] in Python

  array is an array of strings to slice from, at least end elements long
  start is the (inclusive) start index for the slice
  end is the (exclusive) end index for the slice

  returns a freshly-allocated array of strings in the given range.

  Note that the resulting array will always have length (end - start).

  TODO(joe): this ought to do some error checking for negative start, end <
  start, etc.

*/
string* slice(string* array, int start, int end) {
  string* sliceArr = new string[end - start];
  for(int i = start; i < end; i++) {
    sliceArr[i - start] = array[i];
  }
  return sliceArr;
}

/**

  mergeSort - sort an array

  a is an array of strings in any order
  length is the length of the array

*/
string* mergeSort(string* a, int length) {
  // Note that we copy the array before we return it,
  // because otherwise the delete logic below gets quite complicated
  if(length <= 1) { return slice(a, 0, length); }

  string* front = slice(a, 0, length / 2);
  string* back = slice(a, length / 2, length);

  string* frontSorted = mergeSort(front, length / 2);
  string* backSorted = mergeSort(back, length - (length / 2));

  string* result = merge(frontSorted, length / 2, backSorted, length - (length / 2));

  delete [] front;
  delete [] back;
  delete [] frontSorted;
  delete [] backSorted;

  return result;
}

int main() {
  string* a = new string[4];
  a[0] = "c"; a[1] = "b"; a[2] = "a"; a[3] = "d";
  string* s = mergeSort(a, 4);
  cout << s[0] << s[1] << s[2] << s[3] << endl;
  delete [] a;
  delete [] s;

  string* a2 = new string[1];
  a2[0] = "a";
  string* s2 = mergeSort(a2, 1);
  cout << s2[0] << endl;

  delete [] a2;
  delete [] s2;
}
