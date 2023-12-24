/**
 * https://www.luogu.com.cn/problem/P2911
 *
 * @File:   p2911.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-11
 *
 */
#include <iostream>

using namespace std;

int sum[90] = {0, };

int main(void)
{
    int s1, s2, s3, t, idx;

    scanf("%d %d %d", &s1, &s2, &s3);

    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++)
                sum[i + j + k]++;

    t = sum[3];
    idx = 3;

    for (int i = 4; i <= s1 + s2 + s3; i++)
    {
        if (t < sum[i])
        {
            t = sum[i];
            idx = i;
        }
    }
    printf("%d\n", idx);
    return 0;
}
