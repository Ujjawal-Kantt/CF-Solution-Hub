#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> nums(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> nums[i];
        }
        bool flag = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i != j)
                {
                    int x = nums[i] + nums[j];
                    if (x >= 10)
                    {
                        flag = 1;
                    }
                }
            }
        }
        cout << (flag == 0 ? "NO" : "YES") << endl;
    }
    return 0;
}