#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no;
    cin >> no;
    string s;
    cin >> s;
    map<char, int> mpp;
    for (char c : s)
    {
        mpp[c]++;
    }
    int z = 0, e = 0, r = 0, o = 0, n = 0;
    for (auto it : mpp)
    {
        if (it.first == 'z')
        {
            z = it.second;
        }
        if (it.first == 'e')
        {
            e = it.second;
        }
        if (it.first == 'r')
        {
            r = it.second;
        }
        if (it.first == 'o')
        {
            o = it.second;
        }
        if (it.first == 'n')
        {
            n = it.second;
        }
    }
    int zero = 0, one = 0;
    while (o > 0 and n > 0 and e > 0)
    {
        o--;
        e--;
        n--;
        one++;
    }
    while (z > 0 and e > 0 and r > 0 and o > 0)
    {
        o--;
        e--;
        r--;
        z--;
        zero++;
    }
    while (one > 0)
    {
        cout << 1 << " ";
        one--;
    }
    while (zero > 0)
    {
        cout << 0 << " ";
        zero--;
    }
    cout << endl;
    return 0;
}