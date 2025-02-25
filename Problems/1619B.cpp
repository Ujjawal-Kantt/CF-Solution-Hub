#include <iostream>
#include <cmath>
#include <unordered_set>

using namespace std;

int countSquaresAndCubes(int n)
{
    unordered_set<int> likedNumbers;
    for (int i = 1; i * i <= n; ++i)
    {
        likedNumbers.insert(i * i);
    }
    for (int i = 1; i * i * i <= n; ++i)
    {
        likedNumbers.insert(i * i * i);
    }
    return likedNumbers.size();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countSquaresAndCubes(n) << endl;
    }
    return 0;
}