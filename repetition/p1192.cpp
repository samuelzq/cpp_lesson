/**
 * https://www.luogu.com.cn/problem/P1192
 *
 * @File:   p1192.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

int fn[100002] = {0, };

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    fn[0] = 1;
    fn[1] = 1;
    for (int i = 2; i <= k || i <= n; i++)
    {
        for (int j = i - 1; j >= i - k && j >= 0; j--) {
            fn[i] += fn[j];
            fn[i] %= 100003;
        }
    }
    printf("%d\n", fn[n]);
    return 0;
}
