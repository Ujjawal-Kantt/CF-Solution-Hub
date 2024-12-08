#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAXN = 40;
vector<ll> pow2;

void precompute()
{
    pow2.resize(MAXN + 1);
    pow2[0] = 1;
    for (int i = 1; i <= MAXN; i++)
    {
        pow2[i] = pow2[i - 1] * 2;
        if (pow2[i] > 1e12)
            pow2[i] = 1e12 + 1;
    }
}

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    // Check if k is valid
    if (n > MAXN || (n <= MAXN && k > pow2[n - 1]))
    {
        cout << "-1\n";
        return;
    }

    vector<int> perm(n);

    if (k <= pow2[n - 2])
    {
        // First half: starts with 1
        perm[0] = 1;
        int val = 2;
        // Fill rest in ascending order
        for (int i = n - 1; i > 0; i--)
        {
            perm[i] = val++;
        }
    }
    else
    {
        // Second half: ends with 1
        k -= pow2[n - 2];
        // Fill in ascending order except last position
        for (int i = 0; i < n - 1; i++)
        {
            perm[i] = i + 2;
        }
        perm[n - 1] = 1;
    }

    for (int x : perm)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}