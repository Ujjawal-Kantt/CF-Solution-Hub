#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        vector<int> used(n + 1, 0);
        vector<int> p;

        for (int x : a)
        {
            if (!used[x])
            {
                used[x] = 1;
                p.push_back(x);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << (i + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}