#include <iostream>
using namespace std;

void decryptRepeatingCipher(int n, string t)
{
    string result = "";
    int index = 0, step = 1;

    while (index < n)
    {
        result += t[index];
        index += step;
        step++;
    }

    cout << result << endl;
}

int main()
{
    int n;
    string t;
    cin >> n >> t;

    decryptRepeatingCipher(n, t);

    return 0;
}
