#include<iostream>
using namespace std;

int fact(int x){
    int p = 1;
    for(int i = 1; i <= x; i++){
        p  = p * i;
    }
    return p;
}

int c(int n,int r){
    int ans = fact(n)/(fact(n-r)*fact(r));
    return ans;
}

int main(){

    int n,r;
    cin>>n>>r;
    cout<<c(n,r)<<endl;
    
}