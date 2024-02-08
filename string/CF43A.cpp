/**
 * https://www.luogu.com.cn/problem/CF43A
 *
 * @File:   CF43A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2, tmp;
    int n, a, b;

    cin >> n;

    a = b = 0;
    cin >> str1;
    a = 1;
    n--;
    while (n--)
    {
        cin >> tmp;
        if (tmp != str1)
        {
            b++;
            str2 = tmp;
        }
        else
        {
            a++;
        }
    }

    if (a > b)
        cout << str1;
    else
        cout << str2;
    cout << endl;
    return 0;
}
