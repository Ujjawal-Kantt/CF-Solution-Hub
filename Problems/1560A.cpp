#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, i = 0;
        cin >> k;
        int cnt = 0, num = 1;
        while (i < k)
        {
            if (num % 3 != 0 and num % 10 != 3)
            {
                cnt++;
                i++;
            }
            if (cnt < k)
                num++;
        }
        cout << num << endl;
    }
    return 0;
}