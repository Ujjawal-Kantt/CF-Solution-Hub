#include <bits/stdc++.h>
using namespace std;
string check(string s)
{
    int n = s.size();
    if (n < 4)
    {
        return "NO";
    }
    for (int i = 0; i < n - 3; i++)
    {
        if (s[i] == '1' and s[i + 1] == '1' and s[i + 2] == '0' and s[i + 3] == '0')
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> s >> n;
        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            s[a - 1] = b + '0';
            cout << check(s) << endl;
        }
    }
    return 0;
}