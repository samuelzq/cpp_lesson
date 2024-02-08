/**
 * https://www.luogu.com.cn/problem/CF837A
 *
 * @File:   CF837A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, cnt;
    string word;

    cin >> n;
    cnt = 0;
    while (cin >> word)
    {
        n = 0;
        for (char c : word)
        {
            if (isupper(c))
                n++;
        }
        cnt = max(cnt, n);
    }
    cout << cnt << endl;
    return 0;
}
