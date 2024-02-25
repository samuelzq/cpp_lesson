/**
 * https://www.luogu.com.cn/problem/CF29A
 *
 * @File:   CF29A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-12
 *
 */
#include <bits/stdc++.h>

using namespace std;

int x[110], d[110];
int main(void)
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i] >> d[i];

    for (int i = 0; i < n - 1; i++)
    {
        int t = x[i] + d[i];
        for (int j = i + 1; j < n; j++)
        {
            if (t == x[j] && x[i] == x[j] + d[j])
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
