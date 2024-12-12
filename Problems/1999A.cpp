#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int ans = 0;
        cin >> n;
        string a = to_string(n);
        for (char c : a)
        {
            ans += c - '0';
        }
        cout << ans << endl;
    }

    return 0;
}