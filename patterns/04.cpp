#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int sp = 0, st = n;
    
    for(int i = 1; i <= n ; i++){
        
        //printing spaces
        for(int j = 1; j <= sp ; j++){
            cout<<"\t";
        }
        
         //printing stars
        for(int k = 1; k <= st ; k++){
            cout<<"*\t";
        }
        
        sp++;
        st--;
        
        cout<<endl;
    }

}