/**
 * https://www.luogu.com.cn/problem/P3392
 *
 * @File:   p3392.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-05
 *
 */
#include <bits/stdc++.h>

using namespace std;

char s[55];
int w[55] = {0, }, r[55] = {0, }, b[55] = {0};
int n, m;

int checkcolor(char c)
{
    int t = 0;
    for (int i = 0; i < m; i++)
        if (c != s[i])
            t++;
    return t;
}

int main(void)
{
    int ans = 0x7fffffff;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s);
        w[i] = w[i - 1] + checkcolor('W');
        r[i] = r[i - 1] + checkcolor('R');
        b[i] = b[i - 1] + checkcolor('B');
    }
    for (int i = 1; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            ans = min(ans, w[i] + b[j] - b[i] + r[n] - r[j]);
    printf("%d\n", ans);
    return 0;
}
