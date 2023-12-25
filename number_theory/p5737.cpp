/**
 * https://www.luogu.com.cn/problem/P5737
 *
 * @File:   p5737.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-24
 *
 */
#include <iostream>

int ly[2000];

bool is_leap(int y)
{
    if (y % 400 == 0)
        return true;
    else if (y % 4 == 0 && y % 100 != 0)
        return true;
    else
        return false;
}

int main(void)
{
    int x, y, c;

    scanf("%d %d", &x, &y);

    c = 0;
    for (int i = x; i <= y; i++)
    {
        if (is_leap(i))
            ly[c++] = i;
    }

    printf("%d\n", c);
    if (c == 0)
        return 0;
    for (int i = 0; i < c - 1; i++)
    {
        printf("%d ", ly[i]);
    }
    printf("%d\n", ly[c - 1]);
    return 0;
}
