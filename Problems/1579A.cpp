#include <iostream>
#include <string>
using namespace std;

bool canEraseString(const string &s)
{
    int countA = 0, countB = 0, countC = 0;
    for (char ch : s)
    {
        if (ch == 'A')
            countA++;
        else if (ch == 'B')
            countB++;
        else if (ch == 'C')
            countC++;
    }
    return countB == countA + countC;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (canEraseString(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}