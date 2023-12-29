/**
 * https://www.luogu.com.cn/problem/P1591
 *
 * @File:   p1591.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

using namespace std;

const int maxn = 10;
int a[1000000] = {0};

int multi(int a[], int b, int l)
{
    int i, c = 0;

    for (i = 0; i < l; i++)
    {
        int t = a[i] * b + c;

        c = t / maxn;
        t = t % maxn;
        a[i] = t;
    }
    while (c)
    {
        a[i++] = c % 10;
        c /= 10;
    }
    return i;
}

int main(void)
{
    int t, out;

    cin >> t;
    while (t--)
    {
        int n, a1, l;
        cin >> n >> a1;

        l = 1;
        a[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            l = multi(a, i, l);
            //  cout << l << endl; 
        }
#if 0
        cout << l << endl; 
        for (int i = l - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
#endif
        out = 0;
        for (int i = 0; i < l; i++)
        {
            if (a[i] == a1)
                out++;
        }
        cout << out << endl;
    }
    return 0;
}
