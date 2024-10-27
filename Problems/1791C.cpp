#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0, j = n - 1;
        int ans = n;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                ans -= 2;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}