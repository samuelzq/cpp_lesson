/**
 * https://www.luogu.com.cn/problem/P1739
 *
 * @File:   P1739.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cnt = 0;
    string str;

    cin >> str;
    for (char c : str)
    {
        if (cnt < 0)
            break;
        if (c == '(')
            cnt++;
        if (c == ')')
            cnt--;
    }
    if (!cnt)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
