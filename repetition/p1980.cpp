/**
 * https://www.luogu.com.cn/problem/P1980
 *
 * @File:   p1980.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, x;
    int cnt;

    scanf("%d %d", &n, &x);
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        do
        {
            if (t % 10 == x)
                cnt++;
            t /= 10;
        } while (t);
    }
    printf("%d\n", cnt);
    return 0;
}
