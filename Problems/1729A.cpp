#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = abs(a - 1);
        int second = abs(b - c) + abs(c - 1);
        int ans = first == second ? 3 : ((first > second) ? 2 : 1);
        cout << ans << endl;
    }
    return 0;
}