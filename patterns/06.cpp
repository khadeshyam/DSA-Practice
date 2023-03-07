#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int sp = 1, st = n /2 + 1;
    
    for(int i = 1; i <= n ; i++){
        
       
         //printing stars
        for(int k = 1; k <= st ; k++){
            cout<<"*\t";
        }
        
         //printing spaces
        for(int j = 1; j <= sp ; j++){
            cout<<"\t";
        }
        
         //printing stars
        for(int k = 1; k <= st ; k++){
            cout<<"*\t";
        }
        
        //newline after every iteration
        cout<<endl;
        
        //upperhalf logic
        if(i <= n/2 ){
            sp += 2;
            st -= 1;
        }
        
            
        //lowerhalf logic
        else{
            sp -= 2;
            st += 1;
        }
        
    }
        
    
}