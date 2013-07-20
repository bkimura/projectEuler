// Problem: Find the difference between the sum of the
// squares of the first one hundred natural numbers
// and the square of the sum.

#include <iostream>

using namespace std;

int sumOfSquare(int beg, int end) {
  
  int max = 0;
  int 

  return temp;
}

int squareOfSum(int beg, int end) {
  
  int n = end - beg + 1;
  int temp = n*(beg + end)/2;

  temp *= temp;

  return temp;
}

int main() {

  cout << "Solution: " << squareOfSum(1, 5) << endl;
  cout << "Solution: " << squareOfSum(3, 5) << endl;
  cout << "Solution: " << squareOfSum(1, 10) << endl;
  
  return 0;

}
