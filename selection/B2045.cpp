/**
 * https://www.luogu.com.cn/problem/B2045
 *
 * @File:   B2045.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-03-02
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;

    cin >> n;
    switch (n)
    {
        case 1:
        case 5:
        case 3:
            cout << "NO";
            break;
        default:
            cout << "YES";
            break;
    }
    cout << endl;
    return 0;
}
