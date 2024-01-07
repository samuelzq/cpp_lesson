/**
 * https://www.luogu.com.cn/problem/p1923
 *
 * @File:   p1923.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>

int a[5000006];

int findk(int l, int r, int k)
{
    int i, j, f, tmp;

    if (l == r)
        return a[l];
    i = l;
    j = r;
    f = a[(l + r) / 2];
    do
    {
        while (a[i] < f)
            i++;
        while (a[j] > f)
            j--;
        if (i <= j)
        {
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);

    // i > j here
    if (k <= j)
        return findk(l, j, k);
    else if (k >= i)
        return findk(i, r, k);
    else
        return findk(j + 1, i - 1, k);
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d\n", findk(0, n - 1, k));
    return 0;
}
