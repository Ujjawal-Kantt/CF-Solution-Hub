#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int countQ = 0, countQA = 0, countQAQ = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'Q')
        {
            countQAQ += countQA;
            countQ++;
        }
        else if (s[i] == 'A')
        {
            countQA += countQ;
        }
    }

    cout << countQAQ << endl;
    return 0;
}