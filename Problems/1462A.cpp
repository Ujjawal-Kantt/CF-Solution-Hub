#include <iostream>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    if (n <= 2)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << (n - 3) / x + 2 << endl;
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