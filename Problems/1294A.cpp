#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a + b + c + n;
        cout << (((sum % 3 == 0) and max({a, b, c}) * 3 <= sum) ? "YES" : "NO") << endl;
    }
    return 0;
}
