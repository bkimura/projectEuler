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
  if(num = rev) {
    return true;
  } else {
    return false;
  }
}

int main() {
  
  int test = 1001;
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

  return 0;
}
