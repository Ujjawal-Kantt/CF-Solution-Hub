#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int odd = 0, even = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
        {
            odd += arr[i];
        }
        else
        {
            even += arr[i];
        }
    }
    if (odd < even)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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