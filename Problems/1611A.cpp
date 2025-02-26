#include <bits/stdc++.h>
using namespace std;

int minOperationsToMakeEven(const string &n)
{
    int len = n.size();
    if ((n[len - 1] - '0') % 2 == 0)
    {
        return 0; // Last digit is even
    }
    if ((n[0] - '0') % 2 == 0)
    {
        return 1; // First digit is even
    }
    for (int i = 1; i < len - 1; ++i)
    {
        if ((n[i] - '0') % 2 == 0)
        {
            return 2; // Found an even digit in the middle
        }
    }
    return -1; // No even digit found
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        cout << minOperationsToMakeEven(n) << "\n";
    }

    return 0;
}