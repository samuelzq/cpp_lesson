/**
 * https://www.luogu.com.cn/problem/B3978
 *
 * @File:   B3978.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-07-28
 *
 */
#include <bits/stdc++.h>
using namespace std;

bool lucky(int x)
{
    int c = 1;     // 无论最低位是0还是1都认为发生了一次01反转
    int l = x & 1; // 前一个数位值值

    x = x >> 1;
    while (x) {
        if (l != (x & 1))
            c++;   // 数位翻转
        else
            c = 0; // 数位没有翻转

        l = x & 1;
        if (c == 2) //如果出现连续的翻转，则说明出现单独的0或1
            break;
        x = x >> 1;
    }

    if (c)
        return false;
    else
        return true;
}

int main(void)
{
    int a, b, cnt;

    cin >> a >> b;

    cnt = 0;
    for (int i = a; i <= b; i++) {
        if (lucky(i)) {
            //cout << i << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
