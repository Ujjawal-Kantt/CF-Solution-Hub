#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();
        int first = 0, last = 0;
        for (int i = 0; i < 3; i++)
        {
            first += stoi(string(1, str[i]));
            last += stoi(string(1, str[n - i - 1]));
        }
        if (first == last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}