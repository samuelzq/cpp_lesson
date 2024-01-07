/**
 * https://www.luogu.com.cn/problem/p1177
 *
 * @File:   p1177.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-29
 *
 */
#include <iostream>
#include <algorithm>

using namespace std;

int a[100005];

void qsort(int a[], int l, int r)
{
    int i, j, f, tmp;

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
    if (l < j)
        qsort(a, l, j);
    if (i < r)
        qsort(a, i, r);
}

int main(void)
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    //qsort(a, 0, n - 1);
    sort(a, a + n);
    for (int i = 0; i < n- 1; i++)
        printf("%d ", a[i]);
    printf("%d\n", a[n - 1]);
    return 0;
}
