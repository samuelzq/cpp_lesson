/**
 * https://www.luogu.com.cn/problem/CF937 
 *
 * @File:   CF937A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-05-30
 *
 */
#include <bits/stdc++.h>
using namespace std;

int a[601];

int main()
{
    int n, cnt;

    cin >> n;
    cnt = 0;
    while (n--) {
        int t;
        cin >> t;

        if (t && !a[t])
            cnt++;
        a[t] = 1;
    }
    cout << cnt << endl;
    return 0;
}
