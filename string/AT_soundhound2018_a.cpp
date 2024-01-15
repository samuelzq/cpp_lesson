/**
 * https://www.luogu.com.cn/problem/AT_soundhound2018_a
 *
 * @File:   AT_soundhound2018_a.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>

char str1[512], str2[512];

int main(void)
{
    scanf("%s %s", str1, str2);

    if (str1[0] == 'S' && str2[0] == 'H')
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
