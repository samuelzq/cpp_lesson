/**
 * https://www.luogu.com.cn/problem/P1046
 *
 * @File:   p1046.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int a[11];

int main(void)
{
    int h, cnt;

    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    scanf("%d", &h);

    cnt = 0;
    h += 30;

    for (int i = 0; i < 10; i++)
    {
        if (h >= a[i])
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
