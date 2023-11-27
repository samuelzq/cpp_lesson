/**
 * https://www.luogu.com.cn/problem/B3786
 *
 * @File:   b3786.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-18
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int o, e, cnt, a, b;

    scanf("%d %d", &a, &b);

    cnt = 0;
    for (int i = a; i <= b; i++)
    {
        int t, c;
        t = i;
        e = o = c = 0;
        while (t)
        {
            if (c % 2)
                e += t % 10;
            else
                o += t % 10;

            c++;
            t /= 10;
        }
        if (e == o)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
