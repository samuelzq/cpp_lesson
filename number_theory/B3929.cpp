/**
 * https://www.luogu.com.cn/problem/B3929
 *
 * @File:   B3929.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-03
 *
 */
#include <iostream>

#define N     1003001
int lucky[N] = {0};

int main(void)
{
    int a, n, d, ld;

    scanf("%d %d", &a, &n);

    d = 1;
    while (d * d < a)
        d++;

    ld = 0;
    for (; d * d <= N; d++) {
        int t = d * d;
        for (int j = 1; j * t <= N; j++) {
            lucky[j * t] = j * t;
            ld = j * t;
        }
    }

    for (int i = ld - 1; i >= 0; i--) {
        if (!lucky[i])
            lucky[i] = ld;
        else
        ld = i;
    }

    while (n--) {
        int x;
        scanf("%d", &x);

        if (lucky[x] == x)
            printf("lucky\n");
        else
            printf("%d\n", lucky[x]);
    }
    return 0;
}
