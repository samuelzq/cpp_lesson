/**
 * https://www.luogu.com.cn/problem/P2181
 *
 * @File:   p2189.cpp
 * @Author: Lao Zhang <samuelzhang77@outlook.com>
 * @Date:   2023-12-08
 *
 */
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    unsigned long long n,ans;

    scanf("%lld",&n);

    ans = n * (n-1) / 2 * (n-2) / 3 * (n-3) / 4;
    printf("%lld\n",ans);
    return 0;
}
