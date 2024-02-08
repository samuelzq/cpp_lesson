/**
 * https://www.luogu.com.cn/problem/B2114
 *
 * @File:   B2114.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    char c;

    while (cin >> c)
    {
        if (c == 'A')
            cout << 'T';
        else if (c == 'T')
            cout << 'A';
        else if (c == 'G')
            cout << 'C';
        else
            cout << 'G';
    }
    cout << endl;
    return 0;
}
