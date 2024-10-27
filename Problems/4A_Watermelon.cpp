#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string isEven(int w)
{
    if (w > 2 and w % 2 == 0)
        return "YES";
    else
        return "NO";
}
int main()
{
    int w;
    cin >> w;
    cout << isEven(w) << endl;
    return 0;
}