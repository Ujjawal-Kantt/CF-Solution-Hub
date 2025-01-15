#include <iostream>
#include <string>
using namespace std;

string convertTo12HourFormat(string time24)
{
    int hour = stoi(time24.substr(0, 2));
    string minute = time24.substr(3, 2);
    string period = (hour >= 12) ? "PM" : "AM";

    if (hour == 0)
    {
        hour = 12;
    }
    else if (hour > 12)
    {
        hour -= 12;
    }

    string hour12 = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    return hour12 + ":" + minute + " " + period;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string time24;
        cin >> time24;
        cout << convertTo12HourFormat(time24) << endl;
    }
    return 0;
}