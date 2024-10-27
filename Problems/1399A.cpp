#include <bits/stdc++.h>
using namespace std;
string isSingle(int n, vector<int> a)
{
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) > 1)
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << isSingle(n, a) << endl;
    }
    return 0;
}
