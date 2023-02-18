#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"Enter the number"<<endl;
   cin >> n;

   int temp = n;
  
   while (temp != 0) {
      int pop = temp % 10;
      cout << pop << endl;
      temp = temp / 10;
   }

  return 0;
}