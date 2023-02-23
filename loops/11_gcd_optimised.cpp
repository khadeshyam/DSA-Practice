#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int gcd = 1;

    while(n1 % n2){
        int rem = n1 % n2;
        
    }

    gcd = (n1!= 0 && n2 == 0) ? n1:gcd;
    gcd = (n2 != 0 && n1== 0) ? n2:gcd;
    gcd = (n2 == 0 && n1== 0) ? -1:gcd;


    cout<<"gcd ( "<<a<<" "<<b<<" )"<<" = "<<gcd<<endl;
   
}