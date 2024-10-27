#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<char, int> mpp;
        string s;
        cin >> s;
        for (auto c : s)
        {
            mpp[c]++;
        }
        int num_A = mpp['A'];
        int num_B = mpp['B'];
        char ans = (num_A > num_B) ? 'A' : 'B';
        cout << ans << endl;
    }
    return 0;
}