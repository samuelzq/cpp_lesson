/**
 * https://www.luogu.com.cn/problem/P3799
 *
 * 欲由4根木棒组成一个正三角形，则必有 2根长度相等。
 * 且另外2根长度之和，等于 前2根相等的木棒 的长度。
 * 发现 各木棍 的长度 a≤5000，时间复杂度O(n2) 可过。
 * 考虑直接用两层循环，暴力枚举 上述两种木棒的长度，计算方案数并累加。
 *
 * @File:   p37pp.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-07
 *
 */
#include <bits/stdc++.h>

using namespace std;

const int m = 1e9 + 7;

int a[100005];
int b[100005] = {0};

// 求从n个数中取出k个数的组合
long long comb2(long long n)
{
    return n * (n - 1) / 2 % m;
}

int main(void)
{
    int n, maxn;
    long long cnt = 0;

    scanf("%d", &n);

    maxn = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        maxn = max(maxn, a[i]);
        b[a[i]]++;
    }

    for (int i = 2; i <= maxn; i++)  // 枚举两根相等的边
    {
        if (b[i] >= 2)
        {
            long long t = comb2(b[i]);

            for (int j = 1; j <= i / 2; j++) // 枚举被合成的边
            {
                if (j != i - j && b[j] >= 1 && b[i - j] >= 1)
                    cnt += t * b[j] * b[i - j] % m;
                if (j == i - j && b[j] >= 2)
                    cnt += t * comb2(b[j]);
                cnt %= m;
            }
        }
    }


    printf("%lld\n", cnt);
    return 0;
}
