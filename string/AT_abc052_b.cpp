/**
 * https://www.luogu.com.cn/problem/AT_abc052_b
 *
 * @File:   AT_abc052_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-28
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n, h, m;
    string str;

    cin >> n >> str;
    m = h = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'I')
            h++;
        else
            h--;
        m = (m < h) ? h : m;
    }
    cout << m << endl;
    return 0;
}
