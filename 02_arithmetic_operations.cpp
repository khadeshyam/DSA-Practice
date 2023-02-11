#include<bits/stdc++.h>
using namespace std;

int main(){
  int x = 15;
  int y = 10;

  int sum = x + y;
  cout<<"sum of "<<x<<" and "<<y<<" is "<<sum<<endl;

  int diff = x - y;
  cout<<"difference of "<<x<<" and "<<y<<" is "<<diff<<endl;

  int prod = x * y;
  cout<<"product of "<<x<<" and "<<y<<" is "<<prod<<endl;

  int div = x / y;
  cout<<"division of "<<x<<" and "<<y<<" is "<<div<<endl;

  int exp = x * y / x + y;  // priority(* / %) > priority( +  -) 
  //left to right priority(* / %)
                            
  cout<<exp<<endl; 


  return 0;
}