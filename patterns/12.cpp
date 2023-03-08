#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int no = 1;
    
    int curr = 0;
    int next = 1;
    int nextToNext = 0;
    
    for(int i = 1;i <= n;i++){
        
        for(int j = 1;j <= no;j++){
          cout<<curr<<"\t";
          
          //fibonacii logic 
          nextToNext = curr + next;
          curr = next ;
          next = nextToNext;
        }
        
        //print newline
        cout<<endl;
        
        no += 1;
    }
    
}