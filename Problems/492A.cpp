#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cubes = n;
    int used = 0, level = 1;
    while (used <= cubes)
    {
        used += level;
        n -= used;
        if (n >= 1 and n >= (used + level + 1))
            level++;
    }
    cout << level << endl;
    return 0;
}