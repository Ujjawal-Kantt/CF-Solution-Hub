#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canReplaceElements(vector<int> &a, int d)
{
    sort(a.begin(), a.end());
    if (a.back() <= d)
    {
        return true;
    }
    return (a[0] + a[1] <= d);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        if (canReplaceElements(a, d))
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