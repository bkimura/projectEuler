// Problem: What is the smallest number
// evenly divisible by numbers 1-20?
//

#include <iostream>

using namespace std;

int main() {

  int mult = 2;
  bool foundLCM = false;
  int test = 20;

  while(!foundLCM) {

    test = 20 * mult;
    for(int i = 19; i > 0; i--) {
      if(test%i != 0) {
        break;
      }
      if(i == 2) {
        foundLCM = true;
      }
    }    
    mult++;
  }

  cout << "Solution: " << test << endl;

  return 0;

}
