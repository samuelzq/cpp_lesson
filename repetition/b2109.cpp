/**
 * https://www.luogu.com.cn/problem/B2109
 *
 * @File:   b2109.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    char c;
    int cnt;

    cnt = 0;
    while (scanf("%c", &c) != EOF)
    {
        if (c == '\n')
            break;

        if ('0' <= c && c <= '9')
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
