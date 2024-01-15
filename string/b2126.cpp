/**
 * https://www.luogu.com.cn/problem/B2126
 *
 * @File:   b2126.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-14
 *
 */
#include <cstdio>
#include <cstring>

int main(void)
{
    int cnt, k, l;
    char c1, str[1024];

    scanf("%d %s", &k, str);

    l = strlen(str);

    cnt = 1;
    c1 = 0;
    for (int i = 0; i < l; i++)
    {
        if (c1 == str[i])
        {
            cnt++;
            if (cnt >= k)
            {
                printf("%c\n", str[i]);
                return 0;
            }
        }
        else
            cnt = 1;
        c1 = str[i];
    }
    printf("No\n");
    return 0;
}
