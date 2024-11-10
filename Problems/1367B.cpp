#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int odd_in_even_pos = 0, even_in_odd_pos = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0 && arr[i] % 2 != 0)
        {
            odd_in_even_pos++;
        }
        else if (i % 2 != 0 && arr[i] % 2 == 0)
        {
            even_in_odd_pos++;
        }
    }

    if (odd_in_even_pos == even_in_odd_pos)
    {
        cout << odd_in_even_pos << endl;
    }
    else
    {
        cout << -1 << endl;
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