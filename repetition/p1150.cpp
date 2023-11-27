/**
 * https://www.luogu.com.cn/problem/P1150
 *
 * @File:   p1150.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-19
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, k, cnt;

    scanf("%d %d", &n, &k);
    cnt = 0;
    while (n >= k) {
        cnt += k;
        n = n - k + 1;
    }
    cnt += n;
    printf("%d\n", cnt);
    return 0;
}
