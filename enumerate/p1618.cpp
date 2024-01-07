/**
 * https://www.luogu.com.cn/problem/P1618
 *
 * @File:   p1618.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-31
 *
 */
#include <bits/stdc++.h>

int m[11] = {0};

void div(int a)
{
    m[a % 10] = 1;
    m[a / 10 % 10] = 1;
    m[a / 100] = 1;
}

bool check(void)
{
    bool f = true;
    for (int i = 1; i < 10; i++)
    {
        if (m[i] == 0)
        {
            f = false;
            break;
        }
    }
    for (int i = 1; i < 10; i++)
        m[i] = 0;
    return f;
}

int main(void)
{
    bool o = false;
    int a, b, c, t;

    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
        goto exit;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == j)
                continue;
            for (int k = 1; k <= 9; k++)
            {
                int t1, t2;
                if (k == j || k == i)
                    continue;
                t = 100 * i + 10 * j + k;
                t1 = t * b / a;
                t2 = t * c / a;

                if (t1 > 999 || t2 > 999)
                    break;
                div(t);
                div(t1);
                div(t2);
                if (check())
                {
                    o = true;
                    printf("%d %d %d\n", t, t1, t2);
                }
            }
        }
        m[i] = 0;
    }
exit:
    if (o == false)
        printf("No!!!\n");
    return 0;
}
