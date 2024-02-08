/**
 * https://www.luogu.com.cn/problem/CF776A
 *
 * @File:   CF776A.cpp
 * @Author: Lao Zhang samuelzhang77@outlook.com
 * @Date:   2024-01-29
 *
 */
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string m1, m2;
    int n;

    cin >> m1 >> m2;
    cin >> n;

    cout << m1 << ' ' << m2 << endl;
    while (n--)
    {
        string p1, p2;

        cin >> p1 >> p2;

        if (m1 != p1)
        {
            m2 = p2;
            cout << m1 << ' ' << m2;
        }
        else
        {
            m1 = p2;
            cout << m2 << ' ' << m1;
    }
        cout << endl;
    }
    return 0;
}
