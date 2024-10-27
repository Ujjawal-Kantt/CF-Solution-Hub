#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string person1[n], person2[n], person3[n];
        unordered_map<string, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> person1[i];
            mpp[person1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> person2[i];
            mpp[person2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> person3[i];
            mpp[person3[i]]++;
        }
        vector<int> ans(3, 0);
        for (auto it : person1)
        {
            if (mpp[it] == 3)
            {
                ans[0] += 0;
            }
            else if (mpp[it] == 1)
            {
                ans[0] += 3;
            }
            else
            {
                ans[0] += 1;
            }
        }
        for (auto it : person2)
        {
            if (mpp[it] == 3)
            {
                ans[1] += 0;
            }
            else if (mpp[it] == 1)
            {
                ans[1] += 3;
            }
            else
            {
                ans[1] += 1;
            }
        }
        for (auto it : person3)
        {
            if (mpp[it] == 3)
            {
                ans[2] += 0;
            }
            else if (mpp[it] == 1)
            {
                ans[2] += 3;
            }
            else
            {
                ans[2] += 1;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}