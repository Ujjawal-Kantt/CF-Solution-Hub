#include <iostream>
using namespace std;

void solve()
{
    long long x, y, n;
    cin >> x >> y >> n;
    long long k = (n - y) / x * x + y;
    if (k > n)
    {
        k -= x;
    }
    cout << k << endl;
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