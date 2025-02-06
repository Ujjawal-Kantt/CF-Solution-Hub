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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a.push_back(0);
        a.push_back(x);
        sort(a.begin(), a.end());
        int max_distance = 0;
        for (int i = 1; i < a.size(); i++)
        {
            max_distance = max(max_distance, a[i] - a[i - 1]);
        }

        cout << max_distance << "\n";
    }

    return 0;
}