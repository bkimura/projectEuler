// Problem: Find the sum of all
// the mutliples of 3 and 5 below
// 1000.

#include<iostream>

using namespace std;

int main() {

int sum = 0;

for(int i = 3; i < 1000; i+=3) {
  sum+=i;
}

for(int i = 5; i < 1000; i+=5) {
  sum+=i;
}

for(int i = 15; i < 1000; i+=15) {
  sum-=i;
}

cout << "Solution: " << sum << endl;
}
