#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        char ans = '0';
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, s[i]);
        }
        cout << ans << endl;
    }
}