#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int t_diff = 0, t_sum = 0;
    bool isTrained = false;
    for (int i = 0; i < n; i++)
    {
        if (isTrained)
        {
            t_sum += b[i];
        }
        int temp = a[i] - ((i < n - 1) ? b[i + 1] : 0LL);
        if (temp > 0) // if it is +ve only then
        {
            t_diff += a[i];
            isTrained = true;
        }
        else
        {
            isTrained = false;
        }
    }
    cout << t_diff - t_sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}