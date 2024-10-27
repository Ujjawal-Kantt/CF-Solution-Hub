#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bills = 0;
    int denominations[] = {100, 20, 10, 5, 1};
    for (auto it : denominations)
    {
        bills += n / it;
        n %= it;
    }
    cout << bills << endl;
}