#include <iostream>
#include <string>

int main()
{
    std::string a, b;
    std::cin >> a >> b;

    std::string result = "";
    for (size_t i = 0; i < a.length(); ++i)
    {
        if (a[i] == b[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }

    std::cout << result << std::endl;
    return 0;
}