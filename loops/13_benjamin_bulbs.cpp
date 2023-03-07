#include<iostream>
using namespace std;
int main(int argc, char**argv){
  int n;
  cin>>n;
    
  for( int bulb = 1; bulb * bulb <= n ;bulb ++){
        cout<< bulb* bulb <<endl;
    }
    
}