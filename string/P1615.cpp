/**
 * https://www.luogu.com.cn/problem/P1615
 *
 * @File:   P1615.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-16
 *
 */
#include <bits/stdc++.h>

using namespace std;

void getTime(string &t, int &h, int &m, int &s)
{
    int a[3] = {0};
    int i = 0;

    for (char c : t)
    {
        if (c == ':')
            i++;
        else
            a[i] = a[i] * 10 + (c - '0');
    }
    h = a[0];
    m = a[1];
    s = a[2];
}

int main(void)
{
    string str1, str2;
    int h1, h2, m1, m2, s1, s2;
    long long n, cnt;

    cin >> str1 >> str2;
    getTime(str1, h1, m1, s1);
    getTime(str2, h2, m2, s2);
    cin >> n;
    cnt = h2 * 3600 + m2 * 60 + s2 - (h1 * 3600 + m1 * 60 + s1);
    cnt *= n;
    cout << cnt << endl;
    return 0;
}
