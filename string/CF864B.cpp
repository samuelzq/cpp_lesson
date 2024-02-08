/**
 * https://www.luogu.com.cn/problem/CF864B
 *
 * @File:   CF864B.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-06
 *
 */
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int m[26];

int main(void)
{
    int n, cnt, t;
    string str;

    cin >> n >> str;
    cnt = t = 0;
    for (char c : str)
    {
        if (isupper(c))
        {
            memset(m, 0, sizeof(m));
            cnt = max(cnt, t);
            t = 0;
        }
        else
        {
            if (!m[c - 'a'])
            {
                m[c - 'a'] = 1;
                t++;
            }
        }
    }
    cnt = max(cnt, t);
    cout << cnt << endl;
    return 0;
}
