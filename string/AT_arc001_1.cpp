/**
 * https://www.luogu.com.cn/problem/AT_arc001_1
 *
 * @File:   AT_arc001_1.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-04
 *
 */
#include <iostream>

using namespace std;

int a[5] = {0};

int main(void)
{
    int n, m, l;
    char c;

    cin >> n;
    m = 0;
    l = 200;
    while (n--)
    {
        cin >> c;
        a[c - '0']++;
    }

    for (int i = 1; i < 5; i++)
    {
        m = (m < a[i]) ? a[i] : m;
        l = (l > a[i]) ? a[i] : l;
    }
    cout << m << ' ' << l << endl;
    return 0;
}
