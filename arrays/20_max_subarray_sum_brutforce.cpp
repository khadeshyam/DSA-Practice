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

    
    int maxSum = INT_MIN;

    for(int i = 1; i < n; i++){
        int currSum = 0;
        for(int j = i; j < n;j++){
             currSum+=arr[j];
             maxSum = max(maxSum,currSum);
        }
    }

  cout<<"maximum subarray sum is "<<maxSum<<endl;

}