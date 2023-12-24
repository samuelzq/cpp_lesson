/**
 * https://www.luogu.com.cn/problem/P5733
 *
 * @File:   p5733.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-14
 *
 */
#include <iostream>

char str[110];

int main(void)
{
    int i;
    scanf("%s", str);

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            putchar(str[i] - 'a' + 'A');
        else
            putchar(str[i]);
        i++;
    }
    putchar('\n');
    return 0;
}
