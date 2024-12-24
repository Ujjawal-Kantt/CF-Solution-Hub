#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long cycle = a + b + c;
    long long k = n / cycle;
    long long t_dist = k * cycle;
    long long ans = k * 3;
    long long remain = n - t_dist;

    if (remain == 0)
    {
        return ans;
    }
    vector<long long> days = {a, b, c};
    for (int i = 0; i < 3; ++i)
    {
        ans += 1;
        t_dist += days[i];
        if (t_dist >= n)
        {
            return ans;
        }
    }
    while (t_dist < n)
    {
        ans += 3;
        t_dist += cycle;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}