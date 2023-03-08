#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i = 1; i <= n ; i++){

        for(int j = 1; j <= n ; j++){
            if( j==1 || j==n || (i > n/2 && i == j) || (i > n/2 && i + j == n+1) ){
              cout<<"*\t";
            }else{
              cout<<"\t";
            }
        }
        
        //newline after every iteration
        cout<<endl;
    }
   
}