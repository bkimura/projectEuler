// Find the largest palindrome made
// from the product of two 3-digit
// numbers.

#include <iostream>

using namespace std;

bool isPalidrome(int num) {
  int temp = num, rev = 0, add = 0;
  while(temp > 0) {
    add = temp % 10;
    rev += add;
    rev *= 10;
    temp /= 10;
  }

  rev /= 10;

  if(num == rev) {
    //cout << num << " " << rev << endl;
    return true;
  } else {
    //cout << num << " " << rev << endl;
    return false;
  }
}

int main() {
  
  int test = 10201;
  int fail = 11001;

  if(isPalidrome(test)) {
    cout << test << " is a palindrome." << endl;
  } else {
    cout << test << " is NOT a palindrome." << endl;
  }
  if(isPalidrome(fail)) {
    cout << fail << " is a palindrome." << endl;
  } else {
    cout << fail << " is NOT a palindrome." << endl;
  }
 
  int max = 0;
  int size = 99;
  bool found = false;

  // The following for loops iterate through a multiplication table
  //i = row
  for(int i = 999; i > size; i--) {
    //j = col
    for(int j = i; j > size; j--) {
      if(isPalidrome(i*j)) {
        if(i*j>max) {
          max = i*j;
          //resize the boundries of the multiplication table.
          size = j;
        }
        break;
      }
    }
  }

  cout << "Solution: " << max << endl;

  return 0;
}
