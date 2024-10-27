#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = k * l;
    int drink_toast = totalDrink / nl;
    int lime_toast = c * d;
    int salt_toast = p / np;
    cout << (min(lime_toast, (min(salt_toast, drink_toast)))) / n;
    return 0;
}