#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        vector<long long> q(k);
        for (int i = 0; i < k; i++)
        {
            cin >> q[i];
        }
        long long x = n - k;
        if (x == 0) // every question is knwon
        {
            for (int i = 0; i < m; i++)
            {
                cout << '1';
            }
            cout << endl;
            continue;
        }

        if (x > 1)
        { // every unknown
            for (int i = 0; i < m; i++)
            {
                cout << '0';
            }
            cout << endl;
            continue;
        }
        vector<bool> temp(n + 1, false);
        for (long long q : q)
        {
            temp[q] = true;
        }
        long long y = -1;
        for (long long i = 1; i <= n; i++)
        {
            if (!temp[i])
            {
                y = i; // omitted one
                break;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i] == y)
                cout << '1';
            else
                cout << '0';
        }
        cout << endl;
    }
    return 0;
}