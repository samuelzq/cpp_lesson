/**
 * https://www.luogu.com.cn/problem/CF611B
 *
 * @File:   CF611B.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-04-19
 *
 */
#include <bits/stdc++.h>

using namespace std;

// 统计一个非零的输入中有几位是0
int zcnt(long long a)
{
    int cnt = 0;

    while (a) {
        if (!(a & 1))
            cnt++;
        a >>= 1;
    }
    return cnt;
}

int main(void)
{
    int cnt = 0;
    int a, b;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (zcnt(i) == 1) // 累加只有一位是0的数
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
