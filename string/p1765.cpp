/**
 * https://www.luogu.com.cn/problem/P1765
 *
 * @File:   p1765.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-18
 *
 */
#include <iostream>
#include <cstring>

int c[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};

int main(void)
{
    char cc;
    int cnt = 0;
    cc = getchar();
    while (cc != EOF && cc != '\n' && cc != '\r')
    {
        if (cc != ' ')
            cnt += c[cc - 'a'];
        else
            cnt++;
        cc = getchar();
    }
    printf("%d\n", cnt);
    return 0;
}
