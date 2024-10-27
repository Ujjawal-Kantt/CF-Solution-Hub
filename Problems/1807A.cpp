#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] + arr[1] == arr[2])
        {
            cout << '+' << endl;
        }
        else
        {
            cout << '-' << endl;
        }
    }
    return 0;
}