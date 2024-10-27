#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string alphabets;
        cin >> alphabets;
        string word;
        cin >> word;
        unordered_map<char, int> mpp;
        int index = 1;
        for (auto c : alphabets)
        {
            mpp[c] = index;
            index++;
        }
        int ans = 0;
        for (int i = 1; i < word.size(); i++)
        {
            ans += abs(mpp[word[i - 1]] - mpp[word[i]]);
        }
        cout << ans << endl;
    }
    return 0;
}