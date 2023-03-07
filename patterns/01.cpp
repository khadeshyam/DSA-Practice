#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int st = 1;
    
   for(int i = 1; i <= n; i++){
       
        for(int j = 1; j <= st; j++){
         cout<<"*\t";
        }
        
        cout<<endl;
        
        st += 1;
   }
}