#include <bits/stdc++.h>
using namespace std;
int digitDifference(const string &a, const string &b)
{
    int diff = 0;
    for (int i = 0; i < (int)a.size(); i++)
    {
        if (a[i] != b[i])
            diff++;
    }
    return diff;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.size();
        int num = stoi(s);
        if (num % 7 == 0)
        {
            cout << s << "\n";
            continue;
        }
        int start = (len == 2 ? 10 : 100);
        int end = (len == 2 ? 99 : 999);
        int bestDiff = INT_MAX;
        string bestAns = s;

        for (int c = start; c <= end; c++)
        {
            if (c % 7 == 0)
            {
                string cstr = to_string(c);
                if ((int)cstr.size() == len)
                {
                    int diff = digitDifference(s, cstr);
                    if (diff < bestDiff)
                    {
                        bestDiff = diff;
                        bestAns = cstr;
                    }
                }
            }
        }

        cout << bestAns << "\n";
    }
    return 0;
}
