#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p, q;
    cin >> p;
    int pArr[p];
    for (int i = 0; i < p; i++)
    {
        cin >> pArr[i];
    }
    cin >> q;
    int qArr[q];
    for (int i = 0; i < q; i++)
    {
        cin >> qArr[i];
    }
    unordered_map<int, int> mpp;
    for (int i = 1; i <= n; i++)
    {
        mpp[i]++;
    }
    for (int i = 0; i < p; i++)
    {
        if (mpp.find(pArr[i]) != mpp.end())
        {
            mpp.erase(pArr[i]);
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (mpp.find(qArr[i]) != mpp.end())
        {
            mpp.erase(qArr[i]);
        }
    }
    if (!mpp.size())
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}