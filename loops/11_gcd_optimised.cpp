#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    // n1 , n2 => [1,INT_MAX] handle other edge cases seperately

    int gcd = 1;
    int rem = 0;
    

    while( n2 % n1 ){
       rem = n2 % n1;
       n2 = n1;
       n1 = rem;
    }
  
    gcd = n1;

   cout<<gcd<<endl;
   
}