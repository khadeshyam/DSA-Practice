//not optimised use seive of eratosthenes or segmented seive 
#include <iostream>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  
  for (int div = 2; div * div <= n ; div++) {
    if (n % div == 0 ) {
        return false;
        
    }
  }


  return true;

}


int main(int argc, char** argv) {
  int low, high;
  cin >> low >> high;

  for (int i = low; i < high ; i++) {
    if (isPrime(i)) {
      cout << i << endl;
    }

  }

}