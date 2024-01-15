/**
 * https://www.luogu.com.cn/problem/b3769
 *
 * @File:   b3769.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <bits/stdc++.h>

using namespace std;

char str1[1024], str2[1024];

int main(void)
{
    int q, l1, r1, l2, r2;

    scanf("%s %s %d", str1, str2, &q);

    for (int j = 0; j < q; j++)
    {
        int i, l, ret;
        scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

        l1--;
        l2--;
        r1--;
        r2--;
        i = 0;
        while (l1 + i <= r1 && l2 + i <= r2 && str1[l1 + i] && str2[l2 + i] && str1[l1 + i] == str2[l2 + i])
            i++;

       // printf("\n%c %c %d\n", str1[l1 + i], str2[l2 + i], i);
        if (str1[l1 + i] > str2[l2 + i])
            printf("erfusuer\n");
        else if (str1[l1 + i] < str2[l2 + i])
            printf("yifusuyi\n");
        else{
            if (r2 - l2 == r1 - l1)
                printf("ovo\n");
            else if (r2 - l2 > r1 - l1)
                printf("yifusuyi\n");
            else
                printf("erfusuer\n");
        }
    }
    return 0;
}
