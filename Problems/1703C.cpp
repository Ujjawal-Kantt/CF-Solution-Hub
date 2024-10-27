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
        int wheels[n];
        for (int i = 0; i < n; i++)
        {
            cin >> wheels[i];
        }
        vector<int> b(n);
        vector<string> operations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i] >> operations[i];
        }
        int index = 0;
        for (auto c : operations)
        {
            for (int i = 0; i < c.size(); i++)
            {
                if (c[i] == 'U')
                {
                    wheels[index]--;
                    if (wheels[index] < 0)
                    {
                        wheels[index] += 10;
                    }
                }
                else if (c[i] == 'D')
                {
                    wheels[index]++;
                    wheels[index] %= 10;
                }
            }
            index++;
        }
        for (auto it : wheels)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}