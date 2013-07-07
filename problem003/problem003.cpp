// The prime factors of 13195 are 5, 7, 13 and 28.
// What is the largest prime factor of the number
// 600851475143?

#include <iostream>
#include <cmath>

using namespace std;

/* 
  Recursive function to dwindle the num down to
  its' factors.
*/
long factorTree(long num, long fact) {
  // This will increment the factor until an
  // integer factor has been found.
  while(num%fact != 0) {
    fact++;
  }
  cout << "Num: " << num << endl;
  cout << "Fact: " << fact << endl;
  if(fact == num) {
    return fact;
  } 

  num /= fact;
  
  // Don't increment fact because there might
  // be mutliples (i.e. 8/2 = 4)
  factorTree(num, fact);
}

int main() {

  long num = 600851475143, fact = 2;
  cout << "Solution: " << factorTree(num, fact) << endl;
  return 0;

}
