/**
 * https://www.luogu.com.cn/problem/CF1932A
 *
 * @File:   CF1932A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

char c[55];

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, i, cnt;
        scanf("%d", &n);
        scanf("%s", c);

        // 找到第一个连续的**
        for (i = 0; i < n; i++) {
            if (c[i] == '*' && c[i + 1] == '*')
                break;
        }

        // 数之前有多少个@
        cnt = 0;
        for (; i >= 0; i--) {
            if (c[i] == '@')
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}
