#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_set<string> melodies;
        for (int i = 0; i < n - 1; ++i)
        {
            melodies.insert(s.substr(i, 2));
        }

        cout << melodies.size() << endl;
    }
    return 0;
}