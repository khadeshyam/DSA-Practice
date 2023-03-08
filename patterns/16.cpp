#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
  
    int sp = 2 * n - 3;
    int st = 1;
    
    for(int i = 1; i<=n;i++){
        
        //numbers
         for(int j = 1;j <= st; j++){
           cout<<j<<"\t";
        }
        
        //spaces 
        for(int j = 1;j <= sp; j++){
           cout<<"\t";
        }
        
        //numbers
        if(i == n){
            st -= 1;
        }
        for(int j = st;j >= 1; j--){
           cout<<j<<"\t";
        }
        
        //newline
        cout<<endl;
        
        //logic for next iteration
        sp -= 2;
        st += 1;
    }
    
}