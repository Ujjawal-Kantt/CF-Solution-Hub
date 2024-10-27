#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string ans = "";
    int n = str.size();
    int i = 0;
    while (i < n)
    {
        if (str[i] == '.')
        {
            ans += '0';
            i++;
            continue;
        }
        else if (str[i + 1] == '-')
        {
            ans += '2';
            i += 2;
            continue;
        }
        else
        {
            ans += '1';
            i += 2;
            continue;
        }
    }
    cout << ans << endl;
    return 0;
}