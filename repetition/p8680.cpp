/**
 * https://www.luogu.com.cn/problem/P8680
 *
 * @File:   p8680.cpp
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
    for (int i = 1; i <= n; i++)
    {
        int t;
        t = i;

        while (t)
        {
            int b = t % 10;
            if (b == 1 || b == 2 || b == 0 || b == 9)
            {
                cnt += i;
                break;
            }
            t /= 10;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
