#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;

  int temp = n;
  int nod = 0;
  
  while(temp != 0){
       temp = temp / 10;
       nod++;
  }
  cout<<"number of digits in "<<n<<" are "<<nod<<endl;

  return 0;
}