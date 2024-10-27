#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year)
{
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}

int nextBeautifulYear(int year)
{
    while (true)
    {
        year++;
        if (hasDistinctDigits(year))
        {
            return year;
        }
    }
}

int main()
{
    int year;
    cin >> year;
    cout << nextBeautifulYear(year) << endl;
    return 0;
}