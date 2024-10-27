#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<char, int> mpp;
    string checker = "codeforces";
    for (int i = 0; i < checker.size(); i++)
    {
        mpp[checker[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(arr[i]) == mpp.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}