#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    int capacity[n], already[n];
    for (int i = 0; i < n; i++)
    {
        cin >> already[i] >> capacity[i];
        if (capacity[i] - already[i] >= 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}