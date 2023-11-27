/**
 * https://www.luogu.com.cn/problem/B2068
 *
 * @File:   b2068.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, cnt;

    scanf("%d", &n);

    cnt = 0;
    while (n--)
    {
        int t, s;
        scanf("%d", &t);

        s = t % 10;
        t /= 10;
        while (t)
        {
            s -= t % 10;
            t /= 10;
        }
        if (s > 0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
