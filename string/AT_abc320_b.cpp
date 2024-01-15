/**
 * https://www.luogu.com.cn/problem/AT_abc320_b
 *
 * @File:   AT_abc320_b.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-15
 *
 */
#include <cstring>
#include <cstdio>

char str[128];

int main(void)
{
    int k, l = 1;

    scanf("%s", str);

    k = strlen(str);
    for (int i = 0; i < k - 1; i++)
    {
        int t = 1;
        for (int j = i + 1; j < k; j++)
        {
            int ll, rr;
            ll = i;
            rr = j;
            while (ll < rr)
            {
                if (str[ll] != str[rr])
                    break;
                ll++;
                rr--;
            }
            if (ll >= rr)
                t = j - i + 1;
        }
        l = (t > l) ? t : l;
    }
    printf("%d\n", l);
    return 0;
}
