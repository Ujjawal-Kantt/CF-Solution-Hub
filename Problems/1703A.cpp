#include <bits/stdc++.h>
using namespace std;
void isCondition(string s)
{
    if ((s[0] == 'Y' or s[0] == 'y') and (s[1] == 'e' or s[1] == 'E') and (s[2] == 's' or s[2] == 'S'))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        isCondition(s);
    }
    return 0;
}