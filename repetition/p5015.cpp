/**
 * https://www.luogu.com.cn/problem/p5015
 *
 * @File:   p5015.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-16
 *
 */
#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    char c;
    int n;

    n = 0;
    c = getchar();
    while (c != '\n' && c != '\r' && c != EOF)
    {
        if (c != ' ')
            n++;
        c = getchar();
    }
    printf("%d\n", n);
    return 0;
}
