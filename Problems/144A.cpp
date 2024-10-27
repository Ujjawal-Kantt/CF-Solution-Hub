#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> lines(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lines[i];
    }
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (lines[i] > lines[j])
            {
            }
        }
    }
}