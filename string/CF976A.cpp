/**
 * https://www.luogu.com.cn/problem/CF976A
 *
 * @File:   CF976A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int f, cnt;   // count of 9
    string str;

    cin >> cnt >> str;
    cnt = 0;

    f = 0;
    for (char c : str)
    {
        if (c == '0')
            cnt++;
        else
            f = 1;
    }
    if (f)
        cout << f;
    while (cnt--)
        cout << 0;
    cout << endl;
    return 0;
}
