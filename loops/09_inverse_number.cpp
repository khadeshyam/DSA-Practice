/*  
    ************ VISIT THE FOLLOWING LINKS TO KNOW THE QUESTION ************
  
https://www.pepcoding.com/resources/online-java-foundation/getting-started/inverse-of-a-number-official/ojquestion

https://www.youtube.com/watch?v=dbk42TKwk4M&list=PL-Jc9J83PIiFj7YSPl2ulcpwy-mwj1SSk&index=23 
  
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin >> n;
    
    int temp = n;
    int inv = 0;
    int count = 1;
    
    while(temp != 0){
        int pop = temp % 10;
        inv = inv + count * pow(10,pop-1);
        temp = temp/10;
        count += 1;
    }
    

    cout<<"inverse of the number is"<<endl;
    cout<<inv<<endl;
    
}

