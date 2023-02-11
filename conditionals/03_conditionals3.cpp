#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter your marks" << endl;
    cin >> x;

    if (x > 90)
    {
        cout << "Excellent" << endl;
    }
    else if(x>80 and x<=90){
         cout << "good" << endl;
    }
    else if(x>70 and x<=80){
         cout << "fair" << endl;
    }
    else if(x>60 and x<=70){
         cout << "Meets expectations" << endl;
    }
    else{
         cout << "below par" << endl;
    }

    return 0;
}