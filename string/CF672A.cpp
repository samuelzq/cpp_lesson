/**
 *
 * @File:   CF672A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-29
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str = "123456789";
    int i, n;

    i = 10;
    while (str.length() < 1000)
    {
        str += to_string(i);
        i++;
    }

    cin >> n;
    cout << str[n - 1] << endl;
    return 0;
}
