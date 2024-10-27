#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    int size_words = words.size();
    vector<string> ans(n);
    for (int i = 0; i < size_words; i++)
    {
        int x = words[i].size();
        if (x <= 10)
            ans[i] = words[i];
        else
        {
            ans[i] = words[i][0] + to_string(x - 2) + words[i].back();
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}