#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<int> arr(k);
        map<int, int> mpp;
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        vector<int> temp;
        for (auto p : mpp)
        {
            temp.push_back(p.first);
        }
        sort(temp.rbegin(), temp.rend());

        bool isFind = false;
        for (int n : temp)
        {
            int x = k - 2;
            if (n == 0 or x % n != 0)
            {
                continue;
            }
            int m = x / n;
            if (m <= 0)
            {
                continue;
            }
            if (mpp.count(m))
            {
                if (n != m or mpp[n] >= 2)
                {
                    cout << n << " " << m << endl;
                    isFind = true;
                    break;
                }
            }
        }
        if (!isFind)
        {
            cout << "1 1" << endl;
        }
    }
    return 0;
}