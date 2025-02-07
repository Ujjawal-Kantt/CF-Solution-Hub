#include <iostream>
using namespace std;

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int A, B;
    cin >> A >> B;

    int minVal = min(A, B);
    cout << factorial(minVal) << endl;

    return 0;
}