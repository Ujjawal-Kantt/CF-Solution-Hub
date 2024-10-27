#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int no_upper = 0, no_lower = 0;
    for (auto c : s)
    {
        if (c >= 65 and c <= 90)
        {
            no_upper++;
        }
        else if (c >= 97 and c <= 122)
        {
            no_lower++;
        }
    }
    if (no_upper > no_lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;
    return 0;
}