#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long ans = (long long)ceil(double(n) / a) * (long long)ceil(double(m) / a);
    cout << ans;
}
