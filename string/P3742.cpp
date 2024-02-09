/**
 * https://www.luogu.com.cn/problem/P3742
 *
 * @File:   P3742.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    string s1, s2;

    cin >> n >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << s2 << endl;
    return 0;
}
