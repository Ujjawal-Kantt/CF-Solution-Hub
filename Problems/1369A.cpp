#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ans = n % 4 == 0 ? "YES" : "NO";
        cout << ans << endl;
    }
    return 0;
}