/**
 * https://www.luogu.com.cn/problem/P1914
 *
 * @File:   p1914.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-14
 *
 */
#include <iostream>

char str[55];

int main(void)
{
    int n, i;

    scanf("%d", &n);
    scanf("%s", str);

    i = 0;
    while (str[i])
    {
        int d = str[i] - 'a';

        str[i] = 'a' + (d + n) % 26;
        i++;
    }

    printf("%s\n", str);
    return 0;
}
