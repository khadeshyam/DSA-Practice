#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int os = n / 2 , is = -1;
    
    for(int i = 1; i <= n ; i++){

        //outer spaces
        for(int j = 1; j <= os; j++){
            cout<<"\t";
        }
        
        //first star
        cout<<"*\t";
        
        //inner spaces
        for(int j = 1; j <= is; j++){
            cout<<"\t";
        }
        
        //second star
        if(i != 1 && i != n){
          cout<<"*\t";
        }
        
        //newline after every iteration
        cout<<endl;
        
         //upperhalf logic
        if(i <= n/2 ){
            os -= 1;
            is += 2;
        }
        
        //lowerhalf logic
        else{
            os += 1;
            is -= 2;
        }
    }
 
}