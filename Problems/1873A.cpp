#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        string temp = "abc";
        for (int i = 0; i < 3; i++)
        {
            if (s[i] != temp[i])
            {
                ans++;
            }
        }
        cout << (ans >= 3 ? "NO" : "YES") << endl;
    }
    return 0;
}