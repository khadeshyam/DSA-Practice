#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int on1 = num1 , on2 = num2 ,gcd = 1,lcm = 1, rem = 0;
    
    while(num2 % num1){
        rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    
    gcd = num1;
    lcm = (on1 * on2) / gcd;
    
    cout<<gcd<<endl;
    cout<<lcm<<endl;
    
}