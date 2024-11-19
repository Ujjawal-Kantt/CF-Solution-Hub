#include <bits/stdc++.h>
using namespace std;
int main()
{
    string table;
    cin >> table;
    string ans;
    vector<string> hand(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> hand[i];
        if (hand[i][0] == table[0] or hand[i][1] == table[1])
        {
            ans = "YES";
        }
    }
    if (ans != "YES")
    {
        ans = "NO";
    }
    cout << ans << endl;
    return 0;
}