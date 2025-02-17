#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    int arr[3] = {l1, l2, l3};
    sort(arr, arr + 3);

    int a = arr[0], b = arr[1], c = arr[2];
    if ((a == b && c % 2 == 0) || (b == c && a % 2 == 0) || (a + b == c))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
