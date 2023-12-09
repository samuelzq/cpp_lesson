/**
 * https://www.luogu.com.cn/problem/P2669
 *
 * @File:   P2669.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-02
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    unsigned long long cnt;

    scanf("%d", &n);

    k = 1;
    cnt = 0;
    while (n)
    {
        for (int i = 0; i < k && n; i++)
        {
            cnt += k;
            n--;
        }
        k++;
    }
    printf("%lld\n", cnt);
    return 0;
}
