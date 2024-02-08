/**
 * https://www.luogu.com.cn/problem/CF282A
 *
 * @File:   CF282A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int x, n;
    string str;

    cin >> x;

    n = 0;
    while (x--)
    {
        cin >> str;
        if (str == "++X" || str == "X++")
            n++;
        else
            n--;
    }
    cout << n << endl;
    return 0;
}
