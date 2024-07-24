/**
 * https://www.luogu.com.cn/problem/P1719
 *
 * @File:   P1719.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

int s[130][130] = {{0}};

int main(void)
{
    int n, sum, ans;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int t;

            cin >> t;
            s[i][j] = t + s[i - 1][j];
        }
    }

    ans = -0x3f3f3f3f;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            sum = 0;
            for (int k = 1; k <= n; k++) {
                int g = s[i][k] - s[j][k];

                if (sum < 0)
                    sum = 0;
                sum += g;
                ans = max(ans, sum);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
