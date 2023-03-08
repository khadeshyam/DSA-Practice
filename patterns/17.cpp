#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    int sp = n/2;
    int st = 1;
    
    for(int i = 1; i <= n; i+=1){
        
         for(int j = 1; j <= sp ; j+=1){
            if (i == n/2 + 1){
              cout<<"*\t";
            }else{
              cout<<"\t";
            }
         }
         
         for(int j = 1; j <= st ; j+=1){
              cout<<"*\t";
         }
         if(i <= n/2){
            st += 1;
         }else{
            st -= 1;
         }
         
         cout<<endl;
    }
    
}