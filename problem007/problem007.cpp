// Problem: Find the 10001st prime number

#include <iostream>

using namespace std;

int main() {
  
  // n = number of primes found
  // num = number being tested
  int n = 1, num = 1;

  // loop until the 10001st prime 
  // is found
  while(n < 10001) {
    num++;
    for(int i = 2; i < num; i++) {
      
      // A prime number is only evenly
      // divisible by 1 and itself
      if((num%i) == 0) {
        break;
      } else if(i == (num - 1)) {
        // cout << "Prime found: " << num << endl;
        n++;
      }

    }

  }

  cout << "Solution: " << num << endl;
  
  return 0;

}
