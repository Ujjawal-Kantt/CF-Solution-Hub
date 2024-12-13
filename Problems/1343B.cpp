#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 4 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> a, b;
    for (int i = 1; i <= n / 2; ++i)
    {
        if (i % 2 == 0)
        {
            a.push_back(i);
            a.push_back(n - i + 1);
        }
        else
        {
            b.push_back(i);
            b.push_back(n - i + 1);
        }
    }
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    for (int i = 0; i < b.size(); ++i)
    {
        cout << b[i] << " ";
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