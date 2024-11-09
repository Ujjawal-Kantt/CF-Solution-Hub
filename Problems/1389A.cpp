#include <iostream>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;
    if (2 * l > r)
    {
        cout << "-1 -1" << endl;
    }
    else
    {
        cout << l << " " << 2 * l << endl;
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