#include <bits/stdc++.h>
using namespace std;

int longest_common_prefix(const string &a, const string &b)
{
    int length = 0;
    while (length < a.size() && length < b.size() && a[length] == b[length])
    {
        length++;
    }
    return length;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int independent_time = s.size() + t.size();
        int lcp_length = longest_common_prefix(s, t);
        int lcp_time = lcp_length + 1 + (s.size() - lcp_length) + (t.size() - lcp_length);
        int result = min(independent_time, lcp_time);
        cout << result << endl;
    }
    return 0;
}
