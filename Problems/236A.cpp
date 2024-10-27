#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mpp;
    for (auto &c : s)
    {
        mpp[c]++;
    }
    int n = mpp.size();
    if (n % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}