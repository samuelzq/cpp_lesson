/**
 * https://www.luogu.com.cn/problem/CF1696A
 *
 * @File:   CF1696A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-19
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t;

    cin >> t;
    while (t--) {
        int n, z, m;

        cin >> n >> z;
        m = 0;
        while (n--) {
            int a;
            cin >> a;
            m = max(m, z | a);
        }
        cout << m << endl;
    }
    return 0;
}
