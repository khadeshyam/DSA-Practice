#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int cnt = 1;
    int no = 1;
    
    for(int i = 1;i <= n;i++){
        
        for(int j = 1;j <= no;j++){
            cout<<cnt<<"\t";
            cnt += 1;
        }
        
        //print newline
        cout<<endl;
        
        no += 1;
    }
    
}