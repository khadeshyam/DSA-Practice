#include <iostream>
using namespace std;


bool isPrime(int n){
    if(n < 1){
      return false;
    }
    for(int div = 2; div*div <= n ; div++){
         if (n % div == 0 ){
             return false;
         }
    }
    
    return true;
    
}


int main(int argc, char** argv) {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    if (isPrime(n)) {
      cout << "prime" << endl;
    } else {
      cout << "not prime" << endl;
    }
  }
  }