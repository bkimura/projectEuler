// Problem: Find the 10001st prime number

#include <iostream>

using namespace std;

int main() {
  
  int n = 0, num = 1;

  while(n > 100001) {
    num++;
    for(int i = 2; i < num; i++) {

      if((i%num) == 0) {
        break;
      } else if(i == (num - 1)) {
        n++;
      }

    }

  }

  cout << "Solution: " << num << endl;
  
  return 0;

}
