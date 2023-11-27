/**
 * https://www.luogu.com.cn/problem/B3844
 *
 * @File:   b3844.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-17
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    char c = 'A';

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char d = c;
        for (int j = 0; j < n; j++)
        {
            printf("%c", d);
            d++;
            if (d > 'Z')
                d = 'A';
        }
        printf("\n");
        c++;
        if (c > 'Z')
            c = 'A';
    }
    return 0;
}
