#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n % 2 != 0 or m % 2 != 0)
        {
            cout << ((n * m) + 1) / 2 << endl;
        }
        else
        {
            cout << (n * m) / 2 << endl;
        }
    }
    return 0;
}