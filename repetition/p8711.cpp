/**
 * https://www.luogu.com.cn/problem/P8711
 *
 * @File:   p8711.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-11-25
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    long long int n;

    scanf("%lld", &n);

    while (n > 1)
    {
        printf("%lld ", n);
        n /= 2;
    }
    printf("1\n");
    return 0;
}
