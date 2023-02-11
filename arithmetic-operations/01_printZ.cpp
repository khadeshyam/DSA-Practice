#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
  
  cout<<"*****"<<endl; 
  cout<<"   * "<<endl; 
  cout<<"  *  "<<endl; 
  cout<<" *   "<<endl; 
  cout<<"*****"<<endl; 
  
  cout<<"\nUsing Loops"<<endl;
  
  for(int i=0;i<5;i++){
    if(i == 0 || i == 4){
        for(int j = 0;j<5;j++){
           cout<<"*"; 
        }cout<<endl;  
    }
    else{
         for(int j = 0;j<5;j++){
              if( j == 4-i ){
                    cout<<"*"; 
              }
              else{
                cout<<" ";
              }
         }cout<<endl;  
    } 
  }
 
}