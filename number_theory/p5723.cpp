/**
 * https://www.luogu.com.cn/problem/P5723
 *
 * @File:   p5723.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-09
 *
 */
#include <iostream>

using namespace std;

int prim[100005] = {0, };

void init(int len)
{
    prim[0] = prim[1] = 1;
    for (int i = 2; i * i <= len; i++)
    {
        if (!prim[i])
        {
            for (int j = i * i; j <= len; j += i)
                prim[j] = 1;
        }
    }
}

int main(void)
{
    int n, sum, i, k;

    scanf("%d", &n);

    init(n);
    k = sum = 0;
    i = 2;
    while (1)
    {
        if (!prim[i])
        {
            if (sum + i <= n)
            {
                sum += i;
                printf("%d\n", i);
                k++;
            }
            else
            {
                break;
            }
        }
            i++;
    }
    printf("%d\n", k);
    return 0;

}
