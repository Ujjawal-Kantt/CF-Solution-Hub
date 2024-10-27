#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string input;
    cin >> n >> input;
    vector<int> ans(10, 0);
    for (auto c : input)
    {
        if (c == 'L')
        {
            for (int i = 0; i < 10; i++)
            {
                if (ans[i] == 0)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        else if (c == 'R')
        {
            for (int i = 9; i >= 0; i--)
            {
                if (ans[i] == 0)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
        else
        {
            int index = c - '0';
            ans[index] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}