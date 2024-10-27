#include <bits/stdc++.h>
using namespace std;
bool isSameParity(int num1, int num2)
{
    bool first = num1 % 2 == 0;
    bool second = num2 % 2 == 0;
    return first == second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0, first = 0, second = 0, flag = 0;
        ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        second = sum;
        for (int i = 0; i < n - 1; i++)
        {
            first += arr[i];
            second -= arr[i];
            if (isSameParity(first, second))
            {
                flag = 1;
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}