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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> ans(n);
        unordered_map<int, int> mpp;
        vector<int> temp(n + 1, 0);
        int maxF = 0;
        for (int i = 0; i < n; i++)
        {
            if (mpp[arr[i]] + 1 >= maxF)
            {
                ans[i] = arr[i];
                mpp[arr[i]]++;
                if (mpp[arr[i]] > maxF)
                {
                    maxF = mpp[arr[i]];
                }
            }
            else
            {
                int x = 1;
                while (mpp[x] > mpp[arr[i]] or x == arr[i])
                {
                    x++;
                    if (x > n)
                    {
                        x = 1;
                    }
                }
                ans[i] = x;
                mpp[ans[i]]++;
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}