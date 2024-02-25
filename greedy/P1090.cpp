/**
 * https://www.luogu.com.cn/problem/P1090
 *
 * @File:   P1090.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-25
 *
 */
#include <bits/stdc++.h>

using namespace std;

#define N        10004

// a1 保存原始果堆， a2保存每次合并后的果堆
int a1[N], a2[N];

int main(void)
{
    int n, i, j, k, w;
    long long sum;

    memset(a1, 0x7f, sizeof(a1));
    memset(a2, 0x7f, sizeof(a1));

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a1[i];

    if (n == 1)
    {
        cout << a1[0] << endl;
        return 0;
    }

    // 先将原始果堆按升序排列
    sort(a1, a1 + n);
    i = 2;
    j = 0;
    k = 1;
    n--;
    sum = a2[0] = a1[0] + a1[1];
    while (n > 1)
    {
        // 从两个果堆中找最小的果堆合并
        w = a1[i] < a2[j] ? a1[i++] : a2[j++];
        w += a1[i] < a2[j] ? a1[i++] : a2[j++];
        a2[k++] = w;  // 将新合并的果堆放在第二个数组
        sum += w;
        //cout << w << endl;
        n--;
    }
    cout << sum << endl;
    return 0;
}
