#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin >> n;

    int temp = n;
    int digits = 0;
  
    while(temp != 0){
        temp = temp / 10;
        digits += 1;
    }
    
    int div = pow(10,digits-1);
    int count = digits;


    while(count){
        int front = n / div;
        cout<<front<<endl;
        n = n % div;
        div = div /10;
        count -= 1;
    }
  
}