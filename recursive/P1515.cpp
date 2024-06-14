/**
 * https://www.luogu.com.cn/problem/P1515
 *
 * @File:   P1515.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-06-14
 *
 */
#include <bits/stdc++.h>
using namespace std;

int a[100] = {0,990,1010,1970,2030,2940,3060,3930,4060,4970,5030,5990,6010,7000};
int f[7007];

int main(void)
{
    int x, y, n, c, i;

    cin >> x >> y >> n;
    c = 14;
    while (n--) {
        int t;
        cin >> t;
        a[c++] = t;
    }

    sort(a, a + c);

    f[0] = 1;
    for (i = 1; i <= c; i++) {
        for (int j = 0; j < i; j++) {
            int d = a[i] - a[j];
            if (d >= x && d <= y)
                f[a[i]] += f[a[j]];
        }
    }

    cout << f[7000] << endl;
    return 0;
}
