/**
 * https://www.luogu.com.cn/problem/B3663
 *
 * @File:   B3663.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt = 0;
    string s;

    cin >> s;
    for (int i = 0; s.length() > 4 && i <= s.length() - 5;)
    {
        if (s[i] == 'l' && s[i + 1] == 'u' && s[i + 2] == 'o' && s[i + 3] == 'g' && s[i + 4] == 'u')
        {
            cnt++;
            i += 5;
        }
        else
        {
            i += 1;
        }
    }
    cout << cnt << endl;
    return 0;
}
