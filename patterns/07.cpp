#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
   
    for(int i = 1; i <= n ; i++){

        for(int j = 1; j <= n ; j++){
            if(i == j){
              cout<<"*\t";
            }else{
              cout<<"\t";
            }
        }
        //newline after every iteration
        cout<<endl;
    }

}