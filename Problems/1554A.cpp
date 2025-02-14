#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long max_product = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            long long product = (long long)a[i] * a[i + 1];
            max_product = max(max_product, product);
        }

        cout << max_product << endl;
    }
    return 0;
}