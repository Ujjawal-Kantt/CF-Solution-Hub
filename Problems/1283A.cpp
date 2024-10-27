#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hr, min;
        cin >> hr >> min;
        int totalMin = (hr * 60) + min;
        cout << 1440 - totalMin << endl;
    }
    return 0;
}