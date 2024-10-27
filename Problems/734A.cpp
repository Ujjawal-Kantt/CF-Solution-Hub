#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    int no_A = 0, no_D = 0;
    for (auto c : s)
    {
        if (c == 'A')
            no_A++;
        else
            no_D++;
    }
    if (no_A > no_D)
        cout << "Anton";
    else if (no_A < no_D)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}