/**
 *
 * @File:   P1228.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-18
 *
 */
#include <bits/stdc++.h>

using namespace std;

// x, y 不需要普地毯的位置
// a，b每个子区间左上角的坐标
// l 子区间的宽度
void solve(int x, int y, int a, int b, int l)
{
    if (l == 1)  // 无法再铺
        return;

    l /= 2;
    if (x - a < l && y - b < l)
    {
        printf("%d %d 1\n", l + a, l + b);
        solve(x, y, a, b, l);
        solve(a + l - 1, b + l, a, b + l, l);
        solve(a + l, b + l - 1, a + l, b, l);
        solve(a + l, b + l, a + l, b + l, l);
    }
    else if (x - a < l && y - b >= l)
    {
        printf("%d %d 2\n", l + a, b + l - 1);
        solve(a + l - 1, b + l - 1, a, b, l);
        solve(x, y, a, b + l, l);
        solve(a + l, b + l - 1, a + l, b, l);
        solve(a + l, b + l, a + l, b + l, l);
    }
    else if (x - a >= l && y - b < l)
    {
        printf("%d %d 3\n", l + a - 1, b + l);
        solve(a + l - 1, b + l - 1, a, b, l);
        solve(a + l - 1, b + l, a, b + l, l);
        solve(x, y, a + l, b, l);
        solve(a + l, b + l, a + l, b + l, l);
    }
    else
    {
        printf("%d %d 4\n", l + a - 1, b + l - 1);
        solve(a + l - 1, b + l - 1, a, b, l);
        solve(a + l - 1, b + l, a, b + l, l);
        solve(a + l, b + l - 1, a + l, b, l);
        solve(x, y, a + l, b + l, l);
    }
}

int main(void)
{
    int k, x, y, len;

    scanf("%d %d %d", &k, &x, &y);

    len = 1;
    while (k--)
        len *= 2;

    solve(x, y, 1, 1, len);
    return 0;
}
