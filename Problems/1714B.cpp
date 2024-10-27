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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        unordered_set<int> seet;
        for (int i = n - 1; i >= 0; i--)
        {
            if (seet.count(a[i]))
            {
                ans = i + 1;
                break;
            }
            seet.insert(a[i]);
        }
        cout << ans << endl;
    }
}