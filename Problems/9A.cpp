#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int maxi = (x >= y ? x : y);
    int options = 6 - maxi + 1;
    int gcd = __gcd(options, 6);
    cout << options / gcd << "/" << 6 / gcd << endl;
    return 0;
}