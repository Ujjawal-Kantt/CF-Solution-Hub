#include <bits/stdc++.h>
using namespace std;
string lcs(string s1, string s2, string virus)
{
    int m = s1.size();
    int n = s2.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        dp[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 0 + max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    string longestCS = "";
    int index = dp[m][n];
    int i = m;
    int j = n;
    for (int k = 0; k < index; k++)
    {
        longestCS += '$';
    }
    while (i > 0 and j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            longestCS[index] = s1[i - 1];
            index--;
            i--;
            j--;
        }
        else if (s1[i - 1] > s2[j - 1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    return longestCS;
}
int main()
{
    string s1, s2, virus;
    cin >> s1 >> s2 >> virus;
    cout << lcs(s1, s2, virus) << endl;
    return 0;
}