/**
 * https://www.luogu.com.cn/problem/CF43B
 *
 * @File:   CF43B.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-09
 *
 */
#include <bits/stdc++.h>

using namespace std;

int a[26];
int A[26];

int main(void)
{
    string s1, s2;

    getline(cin, s1);

    for (char c : s1)
    {
        if (c == ' ')
            continue;
        if (islower(c))
            a[c - 'a']++;
        else
            A[c - 'A']++;
    }

    getline(cin, s2);

    for (char c : s2)
    {
        if (c == ' ')
            continue;
        if (islower(c))
        {
            if (!a[c - 'a']--)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
        {
            if (!A[c - 'A']--)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}
