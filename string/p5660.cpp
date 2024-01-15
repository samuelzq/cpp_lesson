/**
 * https://www.luogu.com.cn/problem/p5660
 *
 * @File:   p5660.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>

char str[10];

int main(void)
{
    int n;

    scanf("%s", str);

    n = 0;
    for (int i = 0; i < 8; i++)
    {
        if (str[i] == '1')
            n++;
    }
    printf("%d\n", n);
    return 0;
}
