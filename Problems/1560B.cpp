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
        int a, b, c;
        cin >> a >> b >> c;

        int n = 2 * abs(a - b);
        if (a > n || b > n || c > n)
        {
            cout << -1 << "\n";
            continue;
        }

        int d = (c + n / 2) % n;
        if (d == 0)
            d = n;

        cout << d << "\n";
    }

    return 0;
}