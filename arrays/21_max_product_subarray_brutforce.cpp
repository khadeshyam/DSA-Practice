#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter elements of array"<<endl;

    for(int i = 0; i < n ; i++ ){
         cin>>arr[i];
    }

    
    int maxPro = INT_MIN;

    for(int i = 1; i < n; i++){
        int currPro = 1;
        for(int j = i; j < n;j++){
             currPro+=arr[j];
             maxPro = max(maxPro,currPro);
        }
    }

  cout<<"maximum subarray Product is "<<maxPro<<endl;

}