#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int a = ((arr[0] + arr[1]) - arr[2]) / 2;
    int b = arr[0] - a;
    int c = arr[3] - (a + b);
    cout << a << " " << b << " " << c << endl;
    return 0;
}