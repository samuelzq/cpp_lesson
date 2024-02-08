/**
 * https://www.luogu.com.cn/problem/CF133A
 *
 * @File:   CF133A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-01
 *
 */
#include <cstdio>

int main(void)
{
    bool o = false;
    char c;

    while ((c = getchar()) != EOF)
    {
        if (c == 'H' || c == 'Q' || c == '9')
            o = true;
    }

    if (o == true)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
