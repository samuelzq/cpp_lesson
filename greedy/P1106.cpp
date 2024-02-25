/**
 * https://www.luogu.com.cn/problem/P1106
 *
 * @File:   P1106.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

char d[256];

int main(void)
{
    int i, k, l;

    scanf("%s %d", d, &k);

    l = strlen(d);
    while (k > 0)
    {
        int j = 0;
        k--;
        // 从最高位开始删除第一个出现的较大值
        for (i = 0; i < l - 1; i++)
        {
            if (d[i] > d[i + 1])
            {
                j = i;
                break;
            }
        }
        if (i < l - 1) {
            while (j + 1 < l)
            {
                d[j] = d[j + 1];
                j++;
            }
        }
        l--;
        d[l] = 0;
    }

    // 输出时需要跳过头部的0
    i = 0;
    while (d[i] == '0')
        i++;
    if (i == l)
        printf("0\n");
    else
    {
        for (; i < l; i++)
            printf("%c", d[i]);
        printf("\n");
    }

    return 0;
}
