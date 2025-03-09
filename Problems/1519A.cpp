#include <iostream>
using namespace std;

void solve()
{
    long long r, b, d;
    cin >> r >> b >> d;

    if (r > b)
        swap(r, b);

    cout << (b <= r * (d + 1) ? "YES\n" : "NO\n");
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
