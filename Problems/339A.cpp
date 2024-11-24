#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> temp;
    for (auto c : s)
    {
        if (c != '+')
        {
            int x = c - '0';
            temp.push_back(x);
        }
    }
    string ans = "";
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        char y = temp[i] + '0';
        ans += y;
        if (i != temp.size() - 1)
        {
            ans += '+';
        }
    }
    cout << ans << endl;
    return 0;
}