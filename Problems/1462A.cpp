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
        int i = 0, j = n - 1, index = 0;
        while (i <= j)
        {
            if (index % 2 == 0)
            {
                ans[index] = arr[i];
                i++;
            }
            else
            {
                ans[index] = arr[j];
                j--;
            }
            index++;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}