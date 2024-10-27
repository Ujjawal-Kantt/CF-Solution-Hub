#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string rules;
    cin >> rules;
    int ans = 0;
    for (auto it : rules)
    {
        int step = stoi(string(1, it));
        ans += arr[step - 1];
    }
    cout << ans << endl;
}