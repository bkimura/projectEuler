// Problem: Find the difference between the sum of the
// squares of the first one hundred natural numbers
// and the square of the sum.

#include <iostream>

using namespace std;

int sumOfSquare(int beg, int end) {
  
  int max = end*(2*end+1)*(end+1)/6;
  int min = (beg-1)*(2*(beg-1)+1)*((beg-1)+1)/6;

  return max-min;
}

int squareOfSum(int beg, int end) {
  
  int n = end - beg + 1;
  int temp = n*(beg + end)/2;

  temp *= temp;

  return temp;
}

int main() {

  cout << "Beg = 1, End 10, " << "Test Case 1: " << squareOfSum(1, 10) << endl;
  cout << "Beg = 1, End 10, " << "Test Case 1: " << sumOfSquare(1, 10) << endl << endl;

  cout << "Beg = 3, End 5, " << "Test Case 2: " << squareOfSum(3, 5) <<  endl;
  cout << "Beg = 3, End 5, " << "Test Case 2: " << sumOfSquare(3, 5) <<  endl << endl;

  cout << "Solution: " << squareOfSum(1, 100) - sumOfSquare(1, 100) << endl;

  return 0;

}
