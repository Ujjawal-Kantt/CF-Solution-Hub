#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishkaWins = 0, chrisWins = 0;

    for (int i = 0; i < n; ++i)
    {
        int mishka, chris;
        cin >> mishka >> chris;
        if (mishka > chris)
        {
            mishkaWins++;
        }
        else if (chris > mishka)
        {
            chrisWins++;
        }
    }

    if (mishkaWins > chrisWins)
    {
        cout << "Mishka" << endl;
    }
    else if (chrisWins > mishkaWins)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}