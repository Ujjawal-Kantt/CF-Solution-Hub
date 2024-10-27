#include <bits/stdc++.h>
using namespace std;
int solve(string word, int k)
{
    unordered_map<char, int> mpp;
    for (auto c : word)
    {
        mpp[c]++;
    }
    if (mpp.size() < k)
    {
        return 0;
    }
    int mini = INT_MAX;
    for (auto it : mpp)
    {
        mini = min(it.second, mini);
    }
    return mini * k;
}
int main()
{
    int n, k;
    cin >> n >> k;
    string word;
    cin >> word;
    cout << solve(word, k) << endl;
    return 0;
}