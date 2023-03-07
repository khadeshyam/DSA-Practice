#include <iostream>
using namespace std;
int main(int argc, char **argv){
     int n;
     cin>>n;
     
     for(int div = 2; div * div <= n; div++){
         
         while(n % div == 0){
            n = n / div;
            cout << div << " ";
        }
     }
     
    //edge cases eg:46 
    if(n != 1){
             cout << n ;
    }
}
