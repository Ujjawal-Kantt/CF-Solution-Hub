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
        vector<int> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        sort(x.begin(), x.end());
        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                d[i] = x[i + 1] - x[i];
            }
            else if (i == n - 1)
            {
                d[i] = x[i] - x[i - 1];
            }
            else
            {
                d[i] = min(x[i] - x[i - 1], x[i + 1] - x[i]);
            }
        }
        double L = -1e9, R = 1e9;
        for (int i = 0; i < n; i++)
        {
            double leftEdge = x[i] - (double)d[i];
            double rightEdge = x[i] + (double)d[i];
            L = max(L, leftEdge);
            R = min(R, rightEdge);
        }
        if (L >= R)
        {
            cout << "NO\n";
            continue;
        }
        int k = (int)ceil(L + 1.0);
        if (k < R && !binary_search(x.begin(), x.end(), k))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}