// Problem: Find the sum of all of the even
// valued terms in the Fibonacci sequence,
// which do not exceed four million.

#include<iostream>

using namespace std;

void fibonacci(int *fib, int numTerms, int count) {
  if(numTerms != count) {
    fib[count] = fib[count-1] + fib[count-2];
    count++;
    fibonacci(fib, numTerms, count);
  }
}

int main() {

  const int numTerms = 32;
  // Initialize the array with the first 2 terms.
  int fib[numTerms] = {1,2,0};
  int sum = 0;

  // Arrays in C++, start with 0
  fibonacci(fib, numTerms, 2);

  for(int i = 1; i <= numTerms; i+=3) {
    sum += fib[i];
  }

  cout << "Solution: " << sum << endl;

  return 0;
}
