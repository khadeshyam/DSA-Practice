#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i+=1){
        
         for(int j = 1; j <= n; j+=1){
               if(i==n/2+1 || j==n/2+1 || (i==1 && j<=n/2) || (j==1 && i>n/2) || (j==n && i <= n/2) || (i==n && j>n/2+1)){
                   cout<<"*\t";
               }else{
                   cout<<"\t";
               }
         }
         
         cout<<endl;
    }
}
   