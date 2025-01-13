#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;     // Number of test cases
    cin.ignore(); // To handle the newline after the number of test cases

    for (int i = 0; i < t * 3; ++i)
    {
        string row;
        getline(cin, row);

        // Check for the missing character in the current row
        for (char c : {'A', 'B', 'C'})
        {
            if (row.find(c) == string::npos)
            {
                cout << c << endl;
            }
        }
    }

    return 0;
}
