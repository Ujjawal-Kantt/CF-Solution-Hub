#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());

        long long moves = 0;
        for (int i = 0; i < n; ++i)
        {
            int delta_a = a[i] - min_a;
            int delta_b = b[i] - min_b;
            moves += max(delta_a, delta_b);
        }

        cout << moves << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}