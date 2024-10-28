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
        int cows = n / 4;
        int remaining_legs = n % 4;
        int chicken = remaining_legs / 2;
        cout << cows + chicken << endl;
    }
    return 0;
}