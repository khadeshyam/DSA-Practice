#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter two number" << endl;
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        cout << n1 << " is equal to " << n2 << endl;
    }
    else if (n1 > n2)
    {
        cout << n1 << " is greater than " << n2 << endl;
    }
    else
    {
        cout << n1 << " is less than " << n2 << endl;
    }

    return 0;
}