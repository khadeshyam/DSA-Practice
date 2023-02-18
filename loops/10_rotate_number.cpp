#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int temp = n;
    int d = 0;
    
    while(temp != 0){
       temp = temp / 10;
       d++;
    }

    //if k is greater than n
    k = k % d; 

    if(k < 0){
        k = k + d;
    }
    
  
    
    int div = pow(10,k);
    
    int l = n / div;
    int r = n % div;
    int mul = pow(10,d-k);
    
    int ans = r * mul + l;
    
    cout<<ans<<endl;
    
}