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
        int arr[n];
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        int element = 0;
        for (auto val : mpp)
        {
            if (val.second == 1)
            {
                element = val.first;
            }
        }
        int i = 0;
        for (auto val : arr)
        {
            if (val == element)
            {
                cout << i + 1 << endl;
            }
            i++;
        }
    }
    return 0;
}