#include <bits/stdc++.h>
using namespace std;
int cal_product(int n, int arr[])
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> product(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] += 1;
            product[i] = cal_product(n, arr);
            arr[i] -= 1;
        }
        int ans = *max_element(product.begin(), product.end());
        cout << ans << endl;
    }
    return 0;
}