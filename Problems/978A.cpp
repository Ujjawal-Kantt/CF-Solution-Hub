#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mpp.find(arr[i]) == mpp.end())
        {
            ans.push_back(arr[i]);
        }
        mpp[arr[i]]++;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}