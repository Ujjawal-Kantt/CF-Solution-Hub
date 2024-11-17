#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> even, odd;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    for (int x : even)
    {
        cout << x << " ";
    }
    for (int x : odd)
    {
        cout << x << " ";
    }
    cout << endl;
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