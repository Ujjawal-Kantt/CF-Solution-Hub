#include <bits/stdc++.h>
using namespace std;

char findMissingLetter(vector<string> &square)
{
    vector<char> letters = {'A', 'B', 'C'};
    for (char letter : letters)
    {
        bool found = false;
        for (int i = 0; i < 3; ++i)
        {
            if (square[i].find(letter) == string::npos)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return letter;
        }
    }
    return '?';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> square(3);
        for (int i = 0; i < 3; ++i)
        {
            cin >> square[i];
        }
        char missingLetter = findMissingLetter(square);
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < 3; ++j)
            {
                if (square[i][j] == '?')
                {
                    square[i][j] = missingLetter;
                }
            }
        }
        cout << missingLetter << endl;
    }
    return 0;
}