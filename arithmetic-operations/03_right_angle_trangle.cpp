#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    //assumption a is maximum
    int max = a;

    if(b >= max){
        max = b;
    }
    if(c >= max){
        max = c;
    }

   if(max == a){
        bool flag =(b * b + c * c) == a * a;
        cout<<flag<<endl; 
   }else if(max == b){
        bool flag =(a * a + c * c) == b * b;
        cout<<flag<<endl; 
   }else{
        bool flag =(b * b + a * a) == c * c;
        cout<<flag<<endl; 
   }
}