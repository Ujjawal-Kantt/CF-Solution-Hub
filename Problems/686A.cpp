#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long x;
    cin >> n >> x;

    long long current_packs = x;
    int distressed_kids = 0;

    while (n--)
    {
        char c;
        long long d;
        cin >> c >> d;

        if (c == '+')
        {
            current_packs += d;
        }
        else
        {
            if (current_packs >= d)
            {
                current_packs -= d;
            }
            else
            {
                distressed_kids++;
            }
        }
    }

    cout << current_packs << " " << distressed_kids << "\n";
    return 0;
}