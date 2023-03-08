#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    
    int non = 1;
    int start = 0;
    int sp = n/2;
    
    for(int i = 1;i <= n; i++){
        //print spaces
        
        for(int k = 0; k<sp;k++){
            cout<<"\t";
        }
        
        
        //print numbers
        if(i <= n/2 + 1){
            start = i;
        }else{
            start = n - i + 1;
        }
        
        for(int j = 1 ;j<= non ;j++){
            cout<<start<<"\t";
            
            if(j <= non/2 ){
                start += 1;
            }else{
                start -= 1;
            }
            
        }
        //print newline
        cout<<endl;
        
        if(i <= n/2){
            non += 2;
            sp  -= 1;
        }else{
            non -= 2;
            sp  += 1;
        }
    }
    
}