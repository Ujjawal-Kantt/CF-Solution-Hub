#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        while (n > 0)
        {
            if (n == 1)
            {
                ans += a;
                n--;
            }
            else if ((2 * a) < b)
            {
                ans += 2 * a;
                n -= 2;
            }
            else
            {
                ans += b;
                n -= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}