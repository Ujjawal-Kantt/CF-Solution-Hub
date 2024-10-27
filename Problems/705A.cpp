#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I hate" << " ";
            if (i == n - 1)
            {
                cout << "it" << endl;
                return 0;
            }
            else
            {
                cout << "that" << " ";
            }
        }
        else
        {
            cout << "I love" << " ";
            if (i == n - 1)
            {
                cout << "it" << endl;
                return 0;
            }
            else
            {
                cout << "that" << " ";
            }
        }
    }
    return 0;
}