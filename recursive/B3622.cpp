/**
 * https://www.luogu.com.cn/problem/B3622
 *
 * @File:   B3622.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-22
 *
 */
#include <bits/stdc++.h>
using namespace std;

int n;
char c[12];

void dfs(int d)
{
    if (d == n) {
        c[n] = 0;
        printf("%s\n", c);
        return;
    }

    c[d] = 'N';
    dfs(d + 1);
    c[d] = 'Y';
    dfs(d + 1);
}

int main(void)
{
    scanf("%d", &n);
    dfs(0);
    return 0;
}
