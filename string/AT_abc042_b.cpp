/**
 * https://www.luogu.com.cn/problem/AT_abc042_b
 *
 * @File:   AT_abc042_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

string str[110];

int main(void)
{
    int n, l;

    cin >> n >> l;

    for (int i = 0; i < n; i++)
        cin >> str[i];

    sort(str, str + n);

    for (int i = 0; i < n; i++)
        cout << str[i];
    cout << endl;
    return 0;
}
