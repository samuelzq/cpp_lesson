/**
 * https://www.luogu.com.cn/problem/P1249
 *
 * @File:   p1249.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2023-12-28
 *
 */
#include <iostream>

using namespace std;

int a[1000000] = {0, };
char b[6000] = {0, };

int multi(int a[], int b, int l)
{
    int c = 0;

    for (int i = 0; i < l; i++)
    {
        a[i] = a[i] * b + c;
        c = a[i] / 10;
        a[i] = a[i] % 10;
    }
    while (c)
    {
        a[l++] = c % 10;
        c /= 10;
    }
    return l;
}

int main(void)
{
    int n, l, s;

    cin >> n;

    l = s = 0;
    for (int i = 2; l <= n; i++)
    {
        l += i;
        b[i] = 1;
        s++;
    }
    s--;
    b[l - n] = 0;

    l = 1;
    a[0] = 1;
    for (int i = 2; s; i++)
    {
        if (b[i])
        {
            s--;
            cout << i;
            if (s > 0)
                cout << ' ';
            l = multi(a, i, l);
        }
    }

    cout << '\n';
    for (int i = l - 1; i >= 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}
