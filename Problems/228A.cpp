#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mpp;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        mpp[arr[i]]++;
    }
    cout << 4 - mpp.size() << endl;
}