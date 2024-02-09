/**
 * https://www.luogu.com.cn/problem/B3771
 *
 * @File:   B3771.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, cnt;

    cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int j;
        string s = to_string(i);

        for (j = 1; j < s.length(); j++)
        {
            if (s[j - 1] >= s[j])
                break;
        }
        if (j == s.length())
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
