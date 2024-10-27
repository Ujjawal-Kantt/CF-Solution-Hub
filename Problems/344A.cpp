#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string prev;
    cin >> prev;
    int grp = 1;
    for (int i = 1; i < n; i++)
    {
        string curr;
        cin >> curr;
        if (prev != curr)
        {
            grp++;
            prev = curr;
        }
    }
    cout << grp << endl;
    return 0;
}