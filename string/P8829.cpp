/**
 * https://www.luogu.com.cn/problem/P8829
 *
 * @File:   P8829.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-08
 *
 */
#include <bits/stdc++.h>

using namespace std;

char str[512];

int main(void)
{
    int i, len;
    double s, d;
    char src, dest;

    scanf("%s", str);
    len = strlen(str);
    s = d = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            src = str[i];
            break;
        }
        s = s * 10 + (str[i] - '0');
    }
    //printf("%lf %s\n", s, str);

    dest = 0;
    for (; i < len; i++)
    {
        if (str[i] == '?')
        {
            dest = str[i+1];
            break;
        }
    }

    if (src == dest)
    {
        printf("%.6lf\n", s);
        return 0;
    }

    if (src == 'G')
    {
        if (dest == 'M')
            d = s * pow(2, 10);
        else if (dest == 'K')
            d = s * pow(2, 20);
        else
            d = s * pow(2, 30);
    }
    else if (src == 'M')
    {
        if (dest == 'G')
            d = s / pow(2, 10);
        else if (dest == 'K')
            d = s * pow(2, 10);
        else
            d = s * pow(2, 20);

    }
    else if (src == 'K')
    {
        if (dest == 'G')
            d = s / pow(2, 20);
        else if (dest == 'M')
            d = s / pow(2, 10);
        else
            d = s * pow(2, 10);
    }
    else if (src == 'B')
    {
        if (dest == 'G')
            d = s / pow(2, 30);
        else if (dest == 'M')
            d = s / pow(2, 20);
        else
            d = s / pow(2, 10);
    }
    printf("%.6lf\n", d);
    return 0;
}
