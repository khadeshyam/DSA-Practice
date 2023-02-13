#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cout << "Enter the number of testcases" << endl;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the number to be checked" << endl;
        cin >> n;
        int flag = 0;
        for (int div = 2; div < n; div++)
        {
            if(n % div == 0){
                flag = 1;
            }
        }
        if(flag == 1){
            cout<<n<<" is not prime"<<endl;
        }
        else{
            cout<<n<<" is prime"<<endl;
        }
    }
    return 0;
}