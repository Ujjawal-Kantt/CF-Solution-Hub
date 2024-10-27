#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<char> st;
    string input;
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    cin >> input;
    for (auto c : input)
    {
        if (isalpha(c))
        {
            st.insert(tolower(c));
        }
    }
    if (st.size() >= 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}