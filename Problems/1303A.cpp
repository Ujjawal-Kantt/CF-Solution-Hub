#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int first_one = s.find('1');
        int last_one = s.rfind('1');

        if (first_one == string::npos)
        {
            // No '1' in the string
            cout << 0 << "\n";
        }
        else
        {
            int zero_count = 0;
            for (int i = first_one; i <= last_one; ++i)
            {
                if (s[i] == '0')
                {
                    zero_count++;
                }
            }
            cout << zero_count << "\n";
        }
    }

    return 0;
}