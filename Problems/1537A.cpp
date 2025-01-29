#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    if (sum == n)
    {
        cout << 0 << endl;
    }
    else if (sum > n)
    {
        cout << sum - n << endl;
    }
    else
    {
        cout << 1 << endl;
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
