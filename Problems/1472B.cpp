#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> candies(n);
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> candies[i];
        if (candies[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    if ((count1 + 2 * count2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int half = (count1 + 2 * count2) / 2;
        if (half % 2 == 0 || (half % 2 == 1 && count1 != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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