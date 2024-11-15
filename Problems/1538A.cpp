#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mini = *min_element(arr.begin(), arr.end());
        int maxi = *max_element(arr.begin(), arr.end());
        int min_pos = find(arr.begin(), arr.end(), mini) - arr.begin();
        int max_pos = find(arr.begin(), arr.end(), maxi) - arr.begin();

        int left_min = min_pos + 1;
        int right_min = n - min_pos;
        int left_max = max_pos + 1;
        int right_max = n - max_pos;

        int result = min({max(left_min, left_max), max(right_min, right_max), left_min + right_max, left_max + right_min});

        cout << result << endl;
    }
}