/**
 * https://www.luogu.com.cn/problem/CF867A
 *
 * @File:   CF867A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-02-05
 *
 */
#include <iostream>

using namespace std;

int main(void)
{
    int s, f, n;
    char c, p;

    cin >> n;
    f = s = 0;

    cin >> p;
    while (--n)
    {
        cin >> c;
        if (c != p)
        {
            if (p == 'F')
                f++;
            else
                s++;
            p = c;
        }
    }
    if (s > f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
