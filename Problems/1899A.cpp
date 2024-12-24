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
        cout << (((n - 1) % 3 == 0 or (n + 1) % 3 == 0) ? "First" : "Second") << endl;
    }
    return 0;
}