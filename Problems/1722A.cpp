#include <bits/stdc++.h>
using namespace std;

void isCorrect(int size, string s)
{
    string ideal = "Timur";

    if (size != 5)
    {
        cout << "NO" << endl;
        return;
    }

    sort(s.begin(), s.end());
    sort(ideal.begin(), ideal.end());

    if (s == ideal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        string s;
        cin >> size >> s;
        isCorrect(size, s);
    }
    return 0;
}
