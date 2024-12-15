#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0, rem = 0;
        long long row1 = min(a, m);
        long long rem1 = m - row1;
        long long usedRow1 = min(rem1, c);
        c -= usedRow1;
        long long row2 = min(b, m);
        long long rem2 = m - row2;
        long long usedRow2 = min(rem2, c);
        ans = row1 + row2 + usedRow1 + usedRow2;
        cout << ans << endl;
    }
    return 0;
}