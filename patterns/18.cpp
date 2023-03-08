#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i+=1){
        
         for(int j = 1; j <= n; j+=1){
            if(i == 1 || i == n || i == j || i + j == n + 1 ||
            (i > n/2 + 1 && j + i > n + 1 && j < i )){
                cout<<"*\t";
            }else{
                cout<<"\t";
            }
         }
         
         cout<<endl;
    }
    
}