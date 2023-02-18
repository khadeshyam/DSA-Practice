#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    

    int mini = min(a,b);
    int gcd = 1;
    for(int i = mini; i >= 2;i--){
        if((a % i == 0) && (b % i == 0)){
              gcd = i;
              break;
        }
    }

    gcd = (a != 0 && b == 0) ? a:gcd;
    gcd = (b != 0 && a == 0) ? b:gcd;
    gcd = (b == 0 && a == 0) ? -1:gcd;



    cout<<"gcd ( "<<a<<" "<<b<<" )"<<" = "<<gcd<<endl;
   
}