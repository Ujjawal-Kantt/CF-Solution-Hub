#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        int remainder = a % b;
        int quotient = a / b;
        if (!remainder)
        {
            cout << ans << endl;
        }
        else
        {
            ans = ((quotient + 1) * b) - a;
            cout << ans << endl;
        }
    }
    return 0;
}