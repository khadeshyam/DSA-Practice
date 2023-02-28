#include<iostream>
using namespace std;

int findMax(int* arr,int n){
 
 int ans = arr[0];

 for(int i = 0; i < n; i++){
    ans = (arr[i] > ans)?arr[i]:ans;
  }
 return ans;
}


int main(){

  int n;
  cin>>n;
  int* arr = new int[n];

  for(int i = 0; i < n; i++){
    cin>>arr[i];
  }

  int max = findMax(arr,n);
 
  for(int floor = max ; floor >= 1 ; floor-- ){
      for(int i = 0; i < n; i++){
           if(floor <= arr[i]){
             cout<<"*\t";
           }else{
             cout<<" \t";
           }
        }
        cout<<"\n";
  }


  return 0;
}