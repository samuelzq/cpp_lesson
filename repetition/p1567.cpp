/**
 * https://www.luogu.com.cn/problem/P1567
 *
 * @File:   p1567.cpp
 * @Author: Lao Zhang samuelzhang77@yahoo.com
 * @Date:   2023-11-12
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int a1, a2, c, n, o;

    scanf("%d", &n);


    scanf("%d", &a1);
    a2 = a1;
    c = o = 1;

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a2);
        if (a2 > a1)
        {
            c++;
            if (c > o)
                o = c;
        }
        else
        {
            c = 1;
        }
        a1 = a2;
    }
    printf("%d\n", o);
    return 0;
}
