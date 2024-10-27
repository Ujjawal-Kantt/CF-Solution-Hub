#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, police = 0, crimes = 0;
    cin >> n;
    int events[n], untreated = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> events[i];
        if (events[i] == -1 and police == 0)
        {
            untreated++;
        }
        else if (events[i] > -1)
        {
            police += events[i];
        }
        else if (events[i] == -1 and police > 0)
        {
            police -= 1;
        }
    }
    cout << untreated << endl;
    return 0;
}